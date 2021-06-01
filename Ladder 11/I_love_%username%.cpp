#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> A;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    int min =A[0],max=A[0],c=0;
    for(int i=0;i<n;i++){
        if(A[i]<min){
            c++;
            min = A[i];
        }
        if(A[i]>max){
            c++;
            max = A[i];
        }
    }
    cout<<c;
    return 0;
}