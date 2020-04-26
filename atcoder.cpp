#include <iostream>
#include <algorithm>
#include<vector>


using namespace std;

const int MAX=301;
double dp[MAX+5][MAX+5][MAX+5]; // Hold expectation value for each state.
int main()
{   
    
	int N;
	cin >> N; 
	
	vector<int> count(4, 0);// We count how many Sushi plates with 1-sushi, 2-sushi and 3-sushi.
	for (int i = 0; i < N; ++i)
	{
		int t;
		cin >>t;
		++count[t];
	}
	for (int i = 0; i <= MAX; ++i) // Loop for 3 Sushi
		for (int j = 0; i + j <= MAX; ++j)// Loop for 2 Sushi
			for (int k = 0; i + j + k <= MAX; ++k)// Loop for 1 Sushi
			{
				if(i ==0 && j==0 && k==0) //All Sushi over
					continue;
				if(i+j+k > MAX) // Sushi count > N , not possible
					continue;
				
				double K = 1.0 * ( k + j + i); // Total plates with 1-2-3 Sushi 
				
				
				// Add the expectation of choosing plate with 1 Sushi , multiply with probability of choosing 1 over total (K)
				if(k) // if count#1 is !=0
					dp[k][j][i] += ((1.0 * k)  /K ) * dp[k-1][j][i]; 
				
				if(j) // if count#2 is !=0
					dp[k][j][i] += ((1.0 * j)  /K )* dp[k+1][j-1][i]; 
				
				if(i) // if count#1 is !=0
					dp[k][j][i] += ((1.0 * i)  /K )* dp[k][j+1][i-1];
					
				dp[k][j][i] += (1.0 *N)/K;	
			}
			
	cout.precision(15);
    cout << fixed << dp[count[1]][count[2]][count[3]] << "\n";
}
