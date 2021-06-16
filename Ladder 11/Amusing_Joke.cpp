#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string g,h,s;
    cin>>g>>h>>s;
    if(s.length() != g.length()+h.length()){
        cout<<"NO";
    }
    else{
        int c = s.length();
        int c1 = g.length();
        int c2 = h.length();
        vector<int> v (c,0);
        for(int i=0;i<g.length();i++){
            for(int j=0;j<s.length();j++){
                if(s[j] == g[i] && v[j]==0){
                    v[j] = 1;
                    c1--;
                    c--;
                    break;
                }
            }
        }
        for(int i=0;i<h.length();i++){
            for(int j=0;j<s.length();j++){
                if(s[j] == h[i] && v[j] == 0){
                    v[j] = 1;
                    c2--;
                    c--;
                    break;
                }
            }
        }
        
        if(c1==0 && c2==0 && c==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
    }

    return 0;
}