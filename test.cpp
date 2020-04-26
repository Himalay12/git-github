#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    for(int i=0;i<n;i++){
        cout << i << " ";
    }
    return 0;
}
// #include<iostream>
// #include<vector>
// #include<string>

// using namespace std;

// //LONGEST COMMON SUBSEQUENCES

// int LC_subsequence(const string &str1, const string &str2, int pos1,int pos2){

//     static int i=0;
    

//     if(pos1 >= str1.size() || pos2 >= str2.size()) return 0; //base case

//     int a=0,b=0;

//     if(str1.find(str2[pos2],pos1) != string::npos){
//         pos1 = str1.find(str2[pos2],pos1);
//         a = LC_subsequence(str1,str2, pos1+1, pos2+1) + 1;
//     }
//     b = LC_subsequence(str1,str2, pos1, pos2+1);

//     return a>b?a:b;
// }

// /*  MINIMUM NUMBER OF OPERATION
// int min_array[1000][1000] = {};

// int min_operation(const vector<int> &dimension_arr,int i,int j){
    
//     if(i==j) return 0;//base case
    
//     int ans = INT32_MAX;

//     if(min_array[i][j] != 0) return min_array[i][j];

//     for(int k = i;k<j;k++){
        
//         int side1 = min_operation(dimension_arr,i,k);
//         int side2 = min_operation(dimension_arr,k+1,j);

//         cout << side1 << " " << side2 << endl;

//         int total = dimension_arr[i-1]*dimension_arr[k]*dimension_arr[j] + side1 + side2;

//         ans = ans>total?(ans=total):ans;
//     }
//     cout << ans << " ";

//     min_array[i][j] = ans;
//     cout << min_array[i][j] << endl;
//     return min_array[i][j];
// }*/

// int main(){
    
//     string str1,str2;cin >> str1 >> str2;

//     //int arr[str1.size()][str2.size()];

//     int n = LC_subsequence(str1,str2,0,0);
    

    
//     cout << n;
//     return 0;

// }