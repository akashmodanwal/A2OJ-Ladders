#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    if(s[0]>=97 && s[0]<123)
        s[0] -= 32;
    cout<<s;
}

int main(){
    string s;
    cin>>s;
    solve(s);
    return 0;
}