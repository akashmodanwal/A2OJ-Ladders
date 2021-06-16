#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string s;
    set<char> c;
    cin>>s;
    int cn=0;
    for(int i=0;i<s.size();i++){
        c.insert(s[i]);
    }  
    if(c.size()%2!=0){
        cout<<"IGNORE HIM!";
    } 
    else  
        cout<<"CHAT WITH HER!";
    return 0;
}