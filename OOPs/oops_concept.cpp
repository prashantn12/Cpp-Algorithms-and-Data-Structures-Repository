#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

class Hero {
    
    public :
    int health=5;

    private : // private data member only access is the class
    char level='P';
    // empty class size is 1 byte

    void print(){
        cout<<level<<endl;
    }
};

int main() {
	// Object-->Entity-->Properties & behaviour /instance of class
    // Class -->user defind Data type / Custom Data type

    // Creation of object
    Hero h1;
    cout<<"size :- "<<sizeof(h1)<<endl;

    //access the data member using of Dot(.) operator
    cout<<"Health is :- "<<h1.health<<endl;
    //cout<<"level is :- "<<h1.level<<endl;--> this is not able to access 

    //There is 3 access modifire 
    /* 1) public :
       2) private :
       3) protect :

       by default access modifier is private
    */
    
	return 0;
}
