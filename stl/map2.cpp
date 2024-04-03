#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        char ch='a';
        map<char,int> ma;
        for(int i=1;i<=26;i++){
            ma.insert({ch,i});
            ch++;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+ma[s[i]];
        }
        int mini=0;
        if(n%2){
            mini=min(ma[s[n-1]],ma[s[0]]);
        }
        mini=mini+mini;
        int sub=sum-mini;
        if(n>1){ 
            cout<<"Alice"<<" "<<sub<<endl;
        }else{
            cout<<"Bob"<<" "<<ma[s[0]]<<endl;
        }
        
    }

    return 0;
}