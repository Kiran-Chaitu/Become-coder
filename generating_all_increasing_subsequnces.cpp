#include<bits/stdc++.h>
using namespace std;
void solver(vector<int> v, int ind , vector<int> ans , int s){
    if(ind+1 == s){
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout<<endl;
        return;
    }
    if(ans.size()==0 || ans.back() < v[ind]){
        ans.push_back(v[ind]);
        solver(v,ind+1,ans,s);
        ans.pop_back();
    }
    solver(v,ind+1,ans,s);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    solver(v,0,{},n);
    return 0;
}
