#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"


int main() {
	// Doubly pointer 
    int i=10;
    int *p=&i;
    int **dp=&p;
    // cout<<**dp<<endl;

    // cout<<*dp<<endl;
    // cout<<p<<endl;

    // cout<<*p<<endl;

    // cout<<dp<<endl;

    **dp=**dp+2;
    *p=*p+2;
    cout<<**dp<<endl;
    cout<<i<<endl;
	return 0;
    
}
