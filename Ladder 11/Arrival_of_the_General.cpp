#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int min=0,max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[max]){
            max = i;
        }
        else if(arr[i] <= arr[min]){
            if(i > min){
            min = i;
            }
        }
    }
    if(min>max){
        cout<<(max)+(arr.size()-min-1);
    }
    else{
        cout<<(max)+(arr.size()-min-1)-1;
    }
    return 0;
}