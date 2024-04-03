#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

class Hero {
    
    private : 
    int health=5;

    public :
    // constructor declared
    // constructor is same name of class
    // when we create our own constructo on that time by default constructor is destroy automatically
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    
    //Parameterised constructor
    /*new keyword :- this Keyword :- jo bhi aapka current object hota hai uska address this me store hota hai
                    this is pointer to point current object */
    Hero(int health){
        cout<<"Parametrised constructor is called"<<endl;
        this->health=health;
        cout<<health<<endl;
    }

    void print(){
        cout<<"Copy constructor is used"<<endl;
    }
    
};

int main() {
	
    // Hero prashant(70); // when we are create the object that time automaticall call the constructor
    // /*constructor--> 1) object creation invoke
    //                  2) No return data type
    //                  3) No iput parameter
    //                  4) and it is default constructor
    // */
    // cout<<"Hello"<<endl;

    Hero prashant(70);   // we are used here parametrised constructor

    Hero ritesh(prashant); // we are used here copy constructor
    ritesh.print();
	return 0;
}
