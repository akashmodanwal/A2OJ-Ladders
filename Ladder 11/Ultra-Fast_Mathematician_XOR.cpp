#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    string n;
    for(int i=0;i<a.length();i++){
        if(a[i] == b[i]){
            n.push_back('0');
        }
        else if(a[i] != b[i]){
            n.push_back('1');
        }
    }
    cout<<n;
    return 0;
}