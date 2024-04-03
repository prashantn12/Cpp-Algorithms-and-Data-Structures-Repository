#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

void print(int *p){
    cout<<p<<endl;//it's going to print address
    cout<<*p<<endl;//it's going to print value

    return ;
}

void update(int *p){
    p=p+1;
    cout<<"Inside p :-"<<p<<endl;
}

int main() {
	
    int val=5;
    int *p=&val;
    print(p);

    cout<<"Before p :-"<<p<<endl;
    update(p);
    cout<<"After p :-"<<p<<endl;// isme function wala p print nahi hota isliye address same hi print hogya
    // but value print ho jayegi
    
	return 0;
}
