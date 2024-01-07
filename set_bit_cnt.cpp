#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    while((k & (k-1) )!=0) k--;
    int bn=log2(k-1)+1;
    int sum=((k/2)*bn)+1;
  //cout<<sum;
    int c=0;
    for(int i=k+1;i<=n;i++){
        int t=i;
        while(t>0){
            if( t & 1==1) c++;
            t=t>>1;
        }
    }
    cout<<sum+c;
}
