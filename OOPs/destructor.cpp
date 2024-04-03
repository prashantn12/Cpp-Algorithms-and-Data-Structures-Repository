#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

class Hero {
    
    private : 
    int health=5;

    public :
   
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }

    void print(){
        cout<<""<<endl;
    }
    
};

int main() {
	
    Hero prashant;
    // Destructor :- Aapke memory ko deallocate karne ke liye Aapka destructor used hota hai / memory ko free kara na
    // destructor ka name bhi same hota hai class jaisa
    // iska bhi return type nahi hota hai Aaur isme parameter bhi nahi hote hai
    // static allocation ke liye destructor automatically call hota hai but but dynamic allocation ke liye manullay call karna padta hai
	return 0;
}
