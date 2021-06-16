#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    char a = s[0];
    char b = s[s.length()-1];
    if(s.length() > 10){
        cout<<a<<s.length()-2<<b<<endl;
    }
    else 
        cout<<s<<endl;
    }
    return 0;
}