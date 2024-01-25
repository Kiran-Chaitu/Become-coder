#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string text1,text2;
    cin>>text1>>text2;
    n=text1.size()+1,m=text2.size()+1;
    vector<vector<int>> v(m,(vector<int> (n)));
    int x=0,y=0;
    for(int i=1;i<v.size();i++){
        for(int j=1;j<v[i].size();j++){
            if(text1[x++]==text2[y]){
                v[i][j]=1+(v[i-1][j-1]);
            }
            else v[i][j]=max(v[i-1][j],v[i][j-1]);
        }
        x=0;
        y++;
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"length of LCS:-"<<v[m-1][n-1];
}
