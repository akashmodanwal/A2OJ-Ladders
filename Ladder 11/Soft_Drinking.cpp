#include<iostream>
using namespace std;
int min(int a,int b){
    if(a>b)
        return b;
    return a;
}
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a = k*l/nl;
    int b = c*d;
    int x =p/np;
    cout<<min(min(a,b),x)/n;
    return 0;
}