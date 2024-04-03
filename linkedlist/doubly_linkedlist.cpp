#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"
//#define ll long long int

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev= NULL;
        this->next= NULL;
    }
};

//print
void print(Node* &head){
    Node* temp =head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }cout<<endl;
    
}
int getLength(Node*head){
    int len=0;
    Node* temp =head;
    while (temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

int main() {
	Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    cout<<"Len is :-"<<getLength(head)<<endl;
	return 0;
}


