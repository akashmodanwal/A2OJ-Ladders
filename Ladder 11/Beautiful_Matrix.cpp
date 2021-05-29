#include<bits/stdc++.h>
using namespace std;
int abs(int a){
    if(a<0)
        return a*(-1);
    else
        return a;
}
int main(){
    int A[5][5]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(A[i][j] == 1){
                cout<<abs(2-i) + abs(2-j)<<endl;
                break;
            }
        }
    }
    return 0;
}