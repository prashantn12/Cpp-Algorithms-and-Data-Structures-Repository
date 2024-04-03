#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n,k;
    // cin>>n>>k;
    // vector<pair<int,int>>v;
    
    // int a[n];
    // int b[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++){
    //     cin>>b[i];
    // }
    // for(int i=0;i<n;i++){
    //     v.push_back({a[i],b[i]});
    // }
    // sort(v.begin(),v.end());
    // int add=k;
    // for(int i=0;i<n;i++){
    //     if(v[i].first<add){
    //         add=add+v[i].second;
    //     }else{
    //         break;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    // cout<<add<<endl;

    pair<int ,string> p;
    // 1st way of create the pair
    p= make_pair(2,"abc");
    //2nd way of creat the pair
    p={3,"def"};
    cout<<p.first<<" "<<p,second<<endl;
    // why we get need of pair 
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> pa[3];
    pa[0]={1,2};
    pa[1]={2,3};
    pa[2]={3,4};
    
    for(int i=0;i<3;i++){
        cout<<pa[i].first<<" "<<pa[i].second<<endl;
    }

    pair<int,string> p;
    cin>>p.first;
    cout<<p.first;
    return 0;

}   