#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pr;
void gen(vector<int> &temp,vector<int> &v,int t,int i=0){
    if(i==v.size()){
        if(t==0){
            pr.push_back(temp);
        }
        return;
    }
    if(v[i]<=t){
        temp.push_back(v[i]);
        gen(temp,v,t-v[i],i);
        temp.pop_back();
    }
    gen(temp,v,t,i+1);
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int t;
    cin>>t;
    vector<int> temp;
    gen(temp,v,t);
    for(int i=0;i<pr.size();i++){
        for(int j=0;j<pr[i].size();j++){
            cout<<pr[i][j];
        }cout<<endl;
    }
    return 0;
}