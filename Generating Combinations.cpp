#include<bits/stdc++.h>
using namespace std;
void Solver(vector<int> v, int ind, vector<int> ans , int n, int sum,int t){
    if(ind>= n and sum!=t) return;
    else if(sum == t){
        for(int i=0;i<ans.size();i++)    cout<<ans[i]<<" ";
        cout<<endl;
        return ;
    }
    else if(sum > t ) return;
    ans.push_back(v[ind]);
    Solver(v,ind+1,ans,n,sum+v[ind],t);
    ans.pop_back();
    Solver(v,ind+1,ans,n,sum,t);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> ans;
    for(int i=0;i<n;i++) cin>>v[i];
    int t;
    cin>>t;
    sort(v.begin(),v.end());
    Solver(v,0,ans,n,0,t);
}
