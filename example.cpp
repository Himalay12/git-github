#include<iostream>
#include<vector>
#include<string>

using namespace std;
// handle case when zer0 will appear
int decode(const string &str,int pos, vector<int> &arr_vec){
    
    if(pos == str.size()) return 1;
    if(pos > str.size()) return 0;

    int count1 = 0, count2 = 0;
    if(arr_vec.at(pos) != 0) return arr_vec.at(pos);
    
    if(str[pos]-'0' < 3 || str[pos+1]-'0'==0){
        count2 = decode(str,pos+2, arr_vec);
    }
    count1 = decode(str,pos+1, arr_vec);

    arr_vec.at(pos) = count1 + count2;

    return arr_vec.at(pos);
}

int main(){
	string str;cin>>str;
	
    while(str.size()>=1){
        
        if(str[0] == '0') break;
        vector<int> arr_vec(str.size());

        cout << decode(str,0,arr_vec) << endl;
        string temp;cin>>temp;
        str = temp;

    }
    return 0;
}