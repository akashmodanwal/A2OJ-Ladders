#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int max = 0;
    int sum = 0;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        sum = sum -x;
        sum = sum + y;
        if(sum > max)
            max = sum;
    }
    cout<<max;
    return 0;

}