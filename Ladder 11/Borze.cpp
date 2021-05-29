#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string r="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='-'){
            if(s[i+1]=='-'){
                r.push_back('2');
                i++;
            }
            else if(s[i+1] == '.'){
                r.push_back('1');
                i++;
            }
        }
        else if(s[i]== '.'){
            r.push_back('0');
        }
    }
    cout<<r;
    return 0;
}