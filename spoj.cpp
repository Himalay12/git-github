#include<iostream>
#include<vector>

using namespace std;

void fill_gold(vector<int> &gold_array, vector<int> &collect_gold, int m){
    for(int i=m-3;i>=0;i--){
        int a=0,b=0;
        
        if(i+2<m) a=collect_gold.at(i+2);
        if(i+3 < m) b=collect_gold.at(i+3);
        
        collect_gold.at(i) = gold_array.at(i) + (a>b?a:b);
    }
    return ;
}

int main(){

    int test_case = 0; cin >> test_case;

    for(int i=0;i<test_case;i++){
        
        int m; cin >> m;
        
        vector<int> gold_array(m), collect_gold(m);

        for(int j=0;j<m;j++)
        {
            cin >> gold_array.at(j);
            collect_gold.at(j) = 0;
        }
        
        if(m>0) collect_gold.at(m-1) = gold_array.at(m-1);
        if(m>1) collect_gold.at(m-2) = gold_array.at(m-2);

        fill_gold(gold_array, collect_gold, m);
        
        if (m == 1)
        {
            cout << "Case " << i+1 << ": " << collect_gold[m-1] << endl;
        }
        else
        {
            cout << "Case " << i+1 << ": " << (collect_gold[0]>collect_gold[1]?collect_gold[0]:collect_gold[1]) << endl;
        }
        
    }

    return 0;
}