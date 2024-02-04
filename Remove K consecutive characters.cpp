#include<bits/stdc++.h>
using namespace std;
int main()
{
    //REmoving K Consecutive Characters
    int k;
    string s,ns;
    cin>>k>>s;
    int n=s.size(),i=0,j=i+1,f=0;
    while(i<n){ 
        if(s[i]==s[j]){
            f=0;
            while(j<n and s[i]==s[j]){
                if((j-i+1)==k){
                    f=1;
                    break;
                }
                j++;
            }
            if(f){
                i=j+1;
                j=i+1;
            }
            else{
                ns+=s[i];
                i++;
                j=i+1;
            }
        }
        else{
            ns+=s[i];
            i++;
            j++;
        }
    }
    cout<<ns;
}
