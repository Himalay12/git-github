#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int T=0;cin>>T;
    for(int t=1;t<=T;t++){
        int a;cin>>a;
        char ans[a+1];
        
        ans[a]='\0';
        
        //input
        set< pair< pair<ll, ll>, int> > activities;
        for(int i=0;i<a;i++){
            ll start,end;cin>>start>>end;
            activities.insert({{start,end},i});
        }
        
        //process
        ll cend=0,jend=0;
        set< pair< pair<ll, ll>, int> >::iterator cur=activities.begin(),prev;
        ans[ cur->second ]='C';
        cend = (cur->first).second;
        cur++;
        while(cur!=activities.end()){

            if(cend<=(cur->first).first){
                ans[ cur->second ]='C';
                cend = (cur->first).second;
            }
            else if(jend<=(cur->first).first){
                ans[ cur->second ]='J';
                jend = (cur->first).second;
            }
            else{
                break;
            }
            prev=cur;
            cur++;
        }
        cout<<"Case #"<<t<<": ";
        if(cur==activities.end())
            cout<<ans<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }
}