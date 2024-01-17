#include<bits/stdc++.h>
using namespace std;
int main()
{
    //generating all subsets
    int n;
    cin>>n;
    vector<int> v(n);
    vector<vector<int>> sets;
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"{ }"<<endl;
    for(int i=1;i<(1<<n);i++){
        int t=i;
        int c=0;
        vector<int> sub;
        while(t>0){
            c++;
            if(t&1){
                sub.push_back(v[n-c]);
            }
            t>>=1;
        }
        sets.push_back(sub);
    }
    for(auto i:sets){
        cout<<"{";
        for(int j=i.size()-1;j>=0;j--){
            cout<<" "<<i[j]<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}
