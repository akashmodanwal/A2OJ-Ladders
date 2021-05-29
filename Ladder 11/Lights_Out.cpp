#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[4][4];
    int r[4][4];

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cin>>r[i][j];
            A[i][j] = 1+ r[i][j];
        }
    }
   
    for(int j=1;j<4;j++){
        for(int i=1;i<4;i++){
            if(r[i][j]!=0){
                A[i][j-1] += r[i][j];
                A[i-1][j] += r[i][j];
                A[i][j+1] += r[i][j];
                A[i+1][j] += r[i][j];
            }
        }
    }

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cout<<A[i][j]%2;
        }
        cout<<endl;
    }
    return 0;
}