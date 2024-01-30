#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(int n){
    vector<int> ans;
    vector<bool> v(n+1,true);
    v[0]=false,v[1]=false;
    for(int i=2;i<=sqrt(n);i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i){
                if(v[j]) v[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(v[i])    ans.push_back(i); 
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<bool> pri(b-a,true);
    vector<int> ans=sieve(sqrt(b));
    for(int i=0;i<ans.size();i++){
        int k;
        if(a%ans[i]==0) k=ans[i];
        else k=((a/ans[i])+1);
        for(int j=k*ans[i];j<=b;j+=ans[i]){
            if(pri[j-a]) pri[j-a]=false;
        }
    }
    int c=0;
    for(int i=a;i<=b;i++){
        if(pri[i-a]){
            cout<<i<<" ";
        }
    }

}
