#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    s.erase("abc");
    for(auto p :s){
        cout<<p<<endl;
    }

    if(s.find("abc")==s.end()){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    cout<<s.size()<<endl;

    return 0;
}