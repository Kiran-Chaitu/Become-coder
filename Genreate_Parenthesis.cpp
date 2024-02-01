#include<bits/stdc++.h>
using namespace std;
void solver(int close,int open,string s,int n){
    if(close + open == n*2) {
        cout << s << endl;
        return;
    }
    if(close > open) return;
    if(open == n) solver(close+1,open,s+')',n);
    else{
        solver(close,open+1,s+'(',n);
        solver(close+1,open,s+')',n);
    }
}
int main()
{
    int n;
    cin>>n;
    solver(0,1,"(",n);
}
