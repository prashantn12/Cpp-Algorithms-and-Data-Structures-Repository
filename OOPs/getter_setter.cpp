#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

class Hero {
    
    private : //for access the private members we are used the getter & setter
    int health=5;

    public :
    char level='P';
   

    void print(){
        cout<<level<<endl;
    }


    int Health(){
        return health;
    }
    int getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }

    
};

int main() {
	
    Hero prashant;
    
    cout<<"before Prashant Health is :- "<<prashant.Health()<<endl; //getter method uded
    prashant.setHealth(79); //setter method used
    cout<<"after Prashant Health is :- "<<prashant.Health()<<endl; 
	return 0;
}
