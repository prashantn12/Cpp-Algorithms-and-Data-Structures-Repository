#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /* if we want to apply this function then your arry or vector
    have to be sorted */
    sort(arr,arr+n);
    /*if you are using the lower bound function then it will giving this value if this value
    is not present then it will give the next greater value */
    /*if uou are using the upper bound function then it will giving only next greater value */

    int *ptr= lower_bound(arr,arr+n, 9);
    
    if(ptr==arr+n){
        cout<<"Element not found"<<endl;
    }else{
        cout<<(*ptr)<<endl;
    }

    int *pt= upper_bound(arr,arr+n, 5);

    if(pt==arr+n){
        cout<<"Element not found"<<endl;
    }else{
        cout<<(*pt)<<endl;
    }

    /*using of set apply the lower bound and upper bound 
        int n;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            s.insert(p);
        }
        auto it=lower_bound(s.begin(),s.end());
        cout<<(*it)<<endl;
    */
}

