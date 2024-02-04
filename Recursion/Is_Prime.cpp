#include<bits/stdc++.h>
using namespace std;
bool prime(int n,int sq,int i){
    if(n==1) return false;
    if(n%i==0) return false;
    if(i>sq) return true;
    prime(n,sq,i+1);
}
int main()
{
    int n;
    cin>>n;
    int k=prime(n,sqrt(n),2);
    if(k==1) cout<<"Prime";
    else cout<<"Not a Prime";
}
