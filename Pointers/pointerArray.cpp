#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"


int main() {
	// simple method print array first location address
    int arr[10]={5};
    cout<<"address of first memory block is :-"<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<"Chalaki :-"<<0[arr]<<endl;
    //when we do this we are get error --> arr = arr+1;
    // but it is going to work 
    int *ptr =&arr[0];
    ptr=ptr+1;// isme address me add one kiya matlab isme aap agle address pe chale gaye..
    cout<<ptr<<endl;

    char ch[6]="abcde";
    cout<<ch<<endl;/* na na isme hume address nahi milta hai isme to hume character array me jo value
        mil jaytya hai kuki int array aaur char array ke liye cout function alag kam kar ta hai    */
    

    /* is case me bhi pura character array print hoga 
    char *c=&ch[0];
    cout<<c<<endl; */
    
	return 0;
}
