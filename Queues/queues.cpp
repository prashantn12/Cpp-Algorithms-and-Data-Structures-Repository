#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"
//#define ll long long int

int main() {
	//queue:- queue is the first in first out
    //push,pop,size,isempty
    //enqueue:-push operation
    //dequeue:-pop operation

    queue<int> q;
    q.push(14);
    q.push(13);
    q.push(12);
    q.push(11);

    q.pop();
    cout<<"size is :- "<<q.size()<<endl;
    cout<<"Front is the queue :-"<<q.front()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
	return 0;
}


