#include<bits/stdc++.h>
using namespace std;

int solve(int n,int l,int r){
    int c=0;
    if(n==l && n==r)
        return 0;
    if(l==0 && r==0)
        return 0;
    if(l>n/2 || r>n/2){
        if(l>n/2)
            c = c + n -l;
        if(r>n/2)
            c= c+ n-r;
    }
    if(l<=n/2 || r<=n/2){
        if(l<=n/2)
            c = c + l;
        if(r<=n/2)
            c = c + r;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int l=0,r=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        l += x;
        r += y;
    }
    cout<<solve(n,l,r);
    return 0;
}