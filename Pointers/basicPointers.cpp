#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret/Alone"


int main() {
	//int num=5;
    //cout<<num<<endl;
    
    //address of operator --> &
    //cout<<"address of num -->"<<" "<<&num<<endl;
    //store the address
    // int *p--> p is pointer to int
    // * --> * is derefernce operator
    // thats mean *p--> value at address

    int num=10;
    num++;
    int *p=&num;
    cout<<*p<<endl;
    cout<<p<<endl;

    // cout<<"Size of integer is "<<sizeof(num)<<endl;
    // cout<<"Size of Pointer is "<<sizeof(p)<<endl;

    //pointer to int is created ,and pointing to some garbage address
    int i=5;
    //int *p; //----> this is bad habit do not declare this type pointer
    //cout<<*p<<endl;
    //int *p=0;
    //p=&i;
    //cout<<p<<endl;
    //cout<<*p<<endl;


    //How to copy one pointer to another pointer
    int nm=5;
    int *ptr=&nm;
    int *ved=ptr;
    cout<<*ved<<endl;
    
	return 0;
}
