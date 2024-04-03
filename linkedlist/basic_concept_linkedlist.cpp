#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"
//#define ll long long int



class Node{
    public :
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};




int main() {
	//what is linkrd list :- it is one kind of data structure which is made of collection of node
    //node:-node is combination of data and address of next node
    /* LinkedList:-it is one kind of dynamic data structure(you can grow and shrink on run
     time that's why it is not wate memory) no shift the element on insertion time

    Types of Linked list
     1)singly LL
     2)doubly LL
     3)circular LL
     4)circular doubly LL

     1)singly linked list  
     LL--> collection of nodes
     node-->collection of data and node 
    
    */

   // create a new node
    Node* node1=new Node(10); 
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    
	return 0;
}




