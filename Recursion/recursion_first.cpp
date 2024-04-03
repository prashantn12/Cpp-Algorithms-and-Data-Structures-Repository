#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"
//#define ll long long int

int fact(int n){
    if(n==1 || n==0){
        return n;
    }

    return fact(n-1)+fact(n-2);
}
int main() {
   
    cout<<"Enter the no :- ";
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<"Factorial of "<<n<<" is :- "<<ans<<endl;
	return 0;
}


