#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

int main() {

    int i=5;
    
    //Create refrence variable

    int &j=i;
    
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
	
	return 0;
}
