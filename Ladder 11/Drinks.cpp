#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m += x;
    }
    double a =double(m)/n;
    cout<<a;
    return 0;
}