#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
long long int arr[N];

int main(){
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int a,b,d;
        cin>>a>>b>>d;
        arr[a]=arr[a]+d;
        arr[b+1]=arr[b+1]-d;
    }
    for(int i=1;i<=n;i++){
        arr[i]=arr[i-1]+arr[i];
    }
    long long maxi=*max_element(arr,arr+n);
    cout<<maxi<<endl;
}