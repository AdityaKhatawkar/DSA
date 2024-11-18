#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this -> data;
        if(next != NULL){
            delete next; 
            next = NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }

};





void print(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}



int getLength(Node* head){
    int len = 0;
    Node* cur = head;
    while(cur != NULL){
        len++;
        cur = cur->next;
    }
    return len;
}


void insertAtHead(Node* &head, int d){
    Node* newnode = new Node(d);
    newnode -> next = head; 
    head -> prev = newnode;
    head = newnode;
}


void InsertAtTail(Node* &tail, int d){
    Node* newnode = new Node(d);
    tail -> next = newnode;
    newnode -> prev = tail; 
    tail = newnode;
}

void InsertAtPos(Node* &head, Node* &tail, int d, int pos){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }
    
    Node* cur = head; 
    int cnt = 1; 

    while(cnt < pos-1){
        cur = cur->next; 
        cnt++;
    }

    if(cur -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    Node* newnode = new Node(d);
    newnode -> next = cur -> next; 
    newnode -> prev = cur; 
    cur -> next -> prev = newnode;
    cur -> next = newnode;

}


void DeleteNode(Node* &head, Node* &tail, int position){

    if(position == 1){         
        Node* cur = head;
        head = head -> next;
        cur -> next = NULL;
        head -> prev = NULL;
        delete cur;             
    }     

    else{                       
        Node* cur = head;           

        int cnt = 1;

        while(cnt < position){         
            cur = cur -> next;  
            cnt++;
        }

        if(cur -> next == NULL){
            tail = cur -> prev;            
        }

        cur -> prev -> next = cur -> next;
        cur -> prev = NULL;
        cur -> next = NULL; 
        delete cur;                 
    }      

}


int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    print(head);



    //LENGTH OF THE LIST
    cout << "Length is: " << getLength(head) << endl << endl;


    //INSERT AT HEAD 
    insertAtHead(head, 11);
    print(head);


    //INSERT AT TAIL
    InsertAtTail(tail,22);
    print(head);



    //INSERT AT POSITION 
    InsertAtPos(head, tail, 56, 3);
    print(head);


    //Delete AT POSITION 
    DeleteNode(head, tail, 3);
    print(head);

    return 0;
}