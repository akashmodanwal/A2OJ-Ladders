#include<iostream>
#include<vector>
using namespace std;
int main(){
    long n;
    cin>>n;
    long sum =0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum += x;
    }
    int c=0;
    for(int i=1;i<=5;i++){
        if((sum + i)%(n+1)!=1)
            c++;
    }
    cout<<c;
    return 0;
}