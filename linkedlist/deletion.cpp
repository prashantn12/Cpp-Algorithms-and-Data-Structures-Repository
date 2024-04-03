#include <bits/stdc++.h>
using namespace std;
//"Decipline/regret"
//#define ll long long int



class Node{
    public :
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Mene Memory free kar di for node with data :-"<<value<<endl;
    }
};



void insertAtTail(Node* &tail,int d){
    //new node create
    Node* temp = new Node(d);
    tail->next=temp;
    tail=tail->next;
}

//function to create the node
void insertAtHead(Node* &head,int d){

    //new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

// how to travles a linkedlist
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void insertAtPossition(Node* &tail,Node* &head,int possition,int d){

        //if i want to insert first position
        if(possition==1){
            insertAtHead(head,d);
            return;
        }
        


        Node* temp= head;
        int cnt=1;

        while(cnt< possition-1){
            temp=temp->next;
            cnt++;
        }

        //if i want to insert first position
        if(temp->next==NULL){
            insertAtTail(tail,d);
            return;
        }
        //create a node for d
        Node* nodeToInsert= new Node(d);

        nodeToInsert->next=temp->next;

        temp-> next= nodeToInsert;
}

//deletion the node
void deleteNode(int possition,Node* &head){
    //deleting the first or start node
    if(possition==1){
        Node* temp=head;
        head=head->next;
        // memeory free start node
        temp-> next= NULL;
        delete temp;
    }else{
        // deleting the my middle or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<possition){
            prev=curr;
            curr=curr-> next;
            cnt++;
        }
        prev->next= curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}

int main() {
	

   // create a new node
    Node* node1=new Node(10); 
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;
    //also tail pointed to node1 
    Node* tail=node1;
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPossition(tail,head,3,22);
    print(head);

    cout<<"Head :-"<<head->data<<endl;
    cout<<"tail :-"<<tail->data<<endl;

    deleteNode(2,head);
    print(head);
	return 0;
}






