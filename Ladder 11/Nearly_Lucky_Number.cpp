#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n;
    cin>>n;
    int q=0;
    while(n>0){
        int a =n%10;
        n=n/10;
        if(a==7 || a==4){
            q++;
        }
    }
<<<<<<< HEAD
=======
    
}
>>>>>>> 035d7317d05cb1721a0b3c6d27817e3d93b47ed6

    if(q==4 || q==7){
        cout<<"YES";
        }
    else
        cout<<"NO";
    return 0;
}