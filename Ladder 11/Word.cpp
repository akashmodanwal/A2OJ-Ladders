#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int u=0,l=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i] < 91)
            u++;
        else if(s[i]>=97 && s[i]<123)
            l++;
    }
    if(l>=u){
        for(int i=0;i<s.length();i++)
            if(s[i]>=65 && s[i] < 91)
                s[i] += 32;
    }
    else{
        for(int i=0;i<s.length();i++)
            if(s[i]>=97 && s[i]<123)
                s[i] -= 32;
    }
    cout<<s;
}

int main(){
    string s;
    cin>>s;
    solve(s);
    return 0;
}