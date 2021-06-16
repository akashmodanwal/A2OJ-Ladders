#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int d=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>=2)
            d++;
    }
    cout<<d;
    return 0;
}