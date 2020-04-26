#include<bits/stdc++.h>
const int MOD=998244353;
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    int p[n];
    
    for(auto& i:b) cin>>i;
    sort(a,a+n);
    int sum=0;
    for(int i=1;i<=k;i++){
        sum+=p[n-i];
    }
    
    int m=n-k;
    if(m>=0){
                
    }
    return 0;
}
//0 1 2 0 3 
/*int main(){
    int T=0;cin>>T;
    while(T--){
        int n,m;cin>>n>>m;
        vector<int> sum(n+1), cancel_poll(m); vector< vector<int> > vote(m);int max=0;
        for(int i=0;i<m;i++){
            vote[i] = vector<int>(n+1);
            for(int j=0;j<n;j++){
                cin >> vote[i][j];
                if(vote[i][j]>max) max=vote[i][j];
                sum[j]+=vote[i][j];
                if(sum[n]<sum[j]) sum[n]=sum[j];
            }
            vote[i][n] = max;
        }
        while(sum[n]==sum[n-1]){
            int i=0;
            while(sum[n]>sum[i]) i++;
            if(i!=n-1) {cout << "0";break;}

        }
    }
}*/