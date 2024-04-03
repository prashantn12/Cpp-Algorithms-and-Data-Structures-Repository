#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"

//This is program of encapsulation 
 
class student{
    private :
    string name;
    int age=21;
    int hight;

    public:
    int getAge(){
        return this->age;
    }

};

int main() {
	student prashant;
    int Age =prashant.getAge();
    cout<<"Age of Prashant :- "<<Age<<endl;


	return 0;
    
}
