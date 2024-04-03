#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"
#define ll long long int
///long long int n= INT_MAX;



int main() {
    int t;
    cin>>t;
    while(t--){
       int n=3;
       char arr[n][n];
       map<char,int> m;
       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]!='?'){
               m[arr[i][j]]++;
            }
         }
       }
       

      
       for(auto i:m){
            if(i.second==2){
                cout<<i.first<<endl;
                break;
            }
            // cout<<i.first<<" "<<i.second<<endl;
       }
      
    }
	return 0;
}

