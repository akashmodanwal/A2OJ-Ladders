#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    n++;
    while(true){
        int m =n;
        int a = m/1000;
        m=m%1000;
        int b = m/100;
        m=m%100;
        int c = m/10;
        int d=m%10;
        
        if((a==b || a==c || a==d || b==c || b==d || c==d)){
            n++;
        }
        else
            return n;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}