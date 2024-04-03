#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

//This is program of Inheritance
 
class student{
    private :
    string name;
    int age=21;
    int hight=10;

    public:
    int getAge(){
        return this->age;
    }

    int getHight(){
        return this->hight;
    }

};

class male: public student{

    public :
    string color="black";
        
};

int main() {
	student prashant;
    int Age =prashant.getAge();
    cout<<"Age of Prashant :- "<<Age<<endl;


    // Using of Inheritance concept we get the hight
    male m;
    cout<<"Hight of Prashant :-"<<m.getHight()<<endl;

	return 0;
    
}
