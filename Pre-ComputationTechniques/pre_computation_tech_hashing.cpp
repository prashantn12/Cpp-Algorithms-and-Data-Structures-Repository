/*
Given array of a of n integers. Given Q queries 
and in each query given a number X, print count of
that of that number in that array

constraints
1<= N<= 10^5
1<= a[i]<= 10^7
1<= Q <= 10^5

*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
// global array always intially zero rahte hai
int hsh[N];

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
    
}