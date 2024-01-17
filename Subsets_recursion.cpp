#include<bits/stdc++.h>
using namespace std;
void Subset(vector<int> v, int ind , vector<int> ans,int n){
    if(ind>=n){
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    ans.push_back(v[ind]);
    Subset(v,ind+1,ans,n);
    ans.pop_back();
    Subset(v,ind+1,ans,n);

}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    Subset(v,0,{},n);   
}
