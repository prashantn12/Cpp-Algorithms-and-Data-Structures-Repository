#include <bits/stdc++.h>
#include <stack>
using namespace std;
//"Decipline/regret"
//#define ll long long int
//time complexity of push,pop,top-->O(1);


class Stack{
	//properties
	public :
	int *arr;
	int top;
	int size;

	//behaviour
	Stack(int size){
		this->size=size;
		arr = new int[size];
		top=-1;

	}

	void push(int element){
		if(size-top>1){
			top++;
			arr[top]=element;
		}else{
			cout<<"stack is overflow"<<endl;
		}
	}

	void pop(){
		if(top>=0){
			top--;
		}else{
			cout<<"stack is underflow"<<endl;
		}
	}

	int peek(){
		if(top>=0 ){
			return arr[top];
		}else{
			cout<<"Stack is empty"<<endl;
			return -1;
		}
	}
	bool  isempty(){
		if(top==-1){
			return true;
		}else{
			return false;
		}
	}

};

int main() {


	Stack s(5);

	s.push(12);
	s.push(11);
	s.push(10);
	s.push(12);
	s.push(11);
	s.push(25);
	s.push(26);
	cout<<"top of stack function :- "<<s.peek()<<endl;
	s.pop();

	if(s.isempty()){
		cout<<"stack is empty"<<endl;
	}else{
		cout<<"stack is not  empty"<<endl;
	}

	/*
	//stack is data structure it is work as lifo(last in frist out)
	//Stack using stl function
	//Creation of stack
	stack<int> s;
	//push opertion
	s.push(2);
	s.push(3);
	s.push(4);

	//pop
	s.pop();

	cout<<"Printing Top element :- "<<s.top()<<endl;

	//empty hai kya nahi
	if(s.empty()){
		cout<<"Stack is empty"<<endl;
	}else{
		cout<<"Stack is not empty"<<endl;
	}
	cout<<"Printing The size of stack :- "<<s.size()<<endl;
	*/

	return 0;
}






















