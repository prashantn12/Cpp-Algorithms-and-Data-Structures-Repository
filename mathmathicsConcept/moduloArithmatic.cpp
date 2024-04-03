/*Given a number N. print its factorial .
constraints 
1<=N<=100
print answer module M
where M=10e9+7*/
#include<bits/stdc++.h>
using namespace std;
//"Decipline/Regret"
long long int M =10e9+7;

int main(){
    cout<<"Please Enter the nuber :-";
    int n;
    cin>>n;
    long long fact=1;
    for(int i=2;i<=n;i++){
        fact=(fact*i)%M;
    }
    cout<<fact<<endl;
}
/*jo answer store nahi kar sakte  aaur jo ans hum calculate nahi kar sakte hai unko hum modulo 
se calculate kar le and uska jo chota version hai usko print kar diya jay that's why we are 
using the modulo m

what is two significanse of M=10^9+7....
1) 10^9+7--> very close to integer  maximum 
2) MMI-->multiplicative invers
if m is prime then i get 1 to m i get every number MMI*/