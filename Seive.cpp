#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<bool> v(n+1,true);
    //int k=0;
    v[0]=false,v[1]=false;
    for(int i=2;i<=sqrt(n);i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i){
                if(v[j]) v[j]=false;
            }
        }
    }
    cout<<"The prime numbers are:\n";
    for(int i=2;i<=n;i++){
        if(v[i]){
            cout<<i<<" ";
            c++;
        } 
    }
    cout<<"\nTotal number of prime numbers from 1 to "<<n<<" is : "<<c<<endl;
}
