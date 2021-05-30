#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    int c=-1;
    while(true){
        a++;
        if(isPrime(a)){
            break;
        }
    }
    if(a==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
