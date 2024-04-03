#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //int arr[n];
        
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
            
        }
        int ans=0;
        int a=1;
        for(auto pr:m){
            if(pr.second>=3){
                ans=pr.first;
                a=0;
                break;
            }
        }
        if(a){
            cout<<"-1"<<endl;
        }else{
            cout<<ans<<endl;
        }
    }

    return 0;
}