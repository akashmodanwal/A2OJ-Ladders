#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            c1++;
        else if(s[i]=='2')
            c2++;
        else if(s[i]=='3')
            c3++;
    }
    if(c1>0){
    for(int i=0;i<c1-1;i++){
        cout<<"1+";
    }
    cout<<"1";
    }
    if(c2>0){
        if(c1>0){
        cout<<"+";
        }
    for(int i=0;i<c2-1;i++){
        cout<<"2+";
    }
    cout<<"2";
    }

    if(c3>0){
        if(c2>0 || c1>0){
        cout<<"+";
        }
    for(int i=0;i<c3-1;i++){
        cout<<"3+";
    }
    cout<<"3"<<endl;
    }
    return 0;
}