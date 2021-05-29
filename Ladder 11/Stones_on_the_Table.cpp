#include<bits/stdc++.h>
using namespace std;

int solve(string s,int n){
    int c1=0;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            c1++;
        }
    }
    return c1;
}

int main(){
    int n;
    string s;
    cin>>n>>s;
    cout<<solve(s,n);
    return 0;
}