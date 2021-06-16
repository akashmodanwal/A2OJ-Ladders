#include<iostream>
#include<map>
#define ll long long
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int * a =new int[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp.insert({a[i],i});
    }
    ll c1=0,c2=0;
    cin>>m;
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        int index = mp[b];
        c1 = c1 + index + 1;
        c2 = c2 + n - index;
    }
    cout<<c1<<" "<<c2;
    return 0;
}