#include<iostream>
#include<string>
#include<vector>

using namespace std;
int abs(int a) {return a>0?a:-a;}
int min(int a,int b) { return a>b?b:a;}
const int Nmax = 10001,Mod=1000000007;
vector< vector<int> > factor(Nmax);

void fill_fact(){
	
	factor[0] = vector<int>(2);factor[0][0]=1;factor[0][1]=0;
	for(int i=1;i<Nmax;i++){
		factor[i]=vector<int>(i+2);factor[i][0]=1;
		for(int j=1;j<=i;j++){
			factor[i][j] = (factor[i-1][j]%Mod + factor[i-1][j-1]%Mod)%Mod;
		}
	}
	return;
}

int main(){
	fill_fact();
	int T=0;cin>>T;
	while(T--){
		int N;cin>>N;
		string A,B;cin>>A>>B;
		int a_one=0,b_one=0;
		for(int i=0;i<N;i++){
			if(A[i]=='1') a_one++;
			if(B[i]=='1') b_one++;
		}
		int no_zeros = abs(N-a_one-b_one);
		if(a_one == 0 || b_one==0) { cout << factor[N][no_zeros] << endl; continue;}
		if(a_one >= b_one){
			long long sum=0;
			for(int i=no_zeros;i<min(2*b_one,N);i+=2)
				sum = (sum + factor[N][i])%Mod;
			
			cout << sum << endl;
		}
		else{
			long long sum=0;
			for(int i=no_zeros;i<=min(2*a_one,N);i+=2)
				sum = (sum + factor[N][i])%Mod;
			
			cout << sum << endl;
		}
	}
	return 0;
}
/*#include <iostream>
using namespace std;

int check(vector< vector<int> > array){

}

int main() {
	// your code goes here
	int N=0;cin>>N;
	vector< vector<int> > array[N];
	for(int i=0;i<N;i++){
	    array[i] = new vector< vector<int> >(N);
	    for(int j=0;j<N;j++)
	        array[i][j] = vector<int>(N);
	}
	
	for(int i=0;i<N;i++)
	    for(int j=0;j<N;j++)
	        for(int k=0;k<N;k++)
	            cin >> array[i][j][k];
	
	vector< vector<int> > permutation(N);
	for(int i=0;i<N;i++)
		permutation[i] = new vector<int>(N);	

	
	return 0;
}*/


/*int main() {
	// your code goes here
	int T=0;cin >> T;
	
	for(int t=0;t<T;t++){
	    
	    int n_dino=0,k=0; cin >> n_dino >> k;
	    cout << n_dino << " " << k << endl;
	    
        vector<int> arr_dino(n_dino);
	    
        for(int i=0;i<k;i++){
	        arr_dino.at(i) = 1+i;
        }
        
        if(k<n_dino) arr_dino.at(k) = n_dino;
	    
	    for(int i=k+1;i<n_dino;i++)
	        arr_dino.at(i) = i;
	   
	    for(int i=0;i<n_dino;i++)
	        cout << arr_dino.at(i) << " ";
	    cout << endl;
	        
	}

	return 0;
}*/
