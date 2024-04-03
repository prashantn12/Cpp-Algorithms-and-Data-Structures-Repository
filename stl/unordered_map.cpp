#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int max=0;
        int lp=0;
        int a=0;
        for(auto &p:m){
            if(p.second>max){
                max=p.second;
                lp=p.first;
                a=0;
            }else if(p.second==max){
                a=1;
            }
        }
        if(a)cout<<"CONFUSED"<<endl;
        else cout<<lp<<endl;
    }
    return 0;
}