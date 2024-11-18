#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};


void InsertNode(Node* &tail, int element, int d){
    //assuming element is present in the list 

    if(tail == NULL){                   //List is empty
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
        return;
    }

    Node* cur = tail;

    while(cur -> data != element){
        cur = cur -> next;
    }

    Node* newnode = new Node(d);
    newnode -> next = cur -> next; 
    cur -> next = newnode;

}

void print(Node* tail)
{
    if(tail == NULL){
        cout << "Nothing to print" << endl;
        return;
    }
    Node* cur = tail;

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != cur);

    cout << endl;
}


void deletenode(Node* &tail, int val){

    if(tail == NULL){
        cout << "Nothing to delete" << endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* cur = prev -> next;

        while(cur -> data !=val){
            prev = cur;
            cur = cur -> next;
        }

        prev -> next = cur -> next;
        if(cur == prev){        //For single node in LL
            tail = NULL;
        }

        else if(tail == cur){   //2 nodes
            tail = prev;
        }

        cur -> next = NULL;
        delete cur;
    }
}



int main()
{
    Node* tail = NULL;
    

    InsertNode(tail,1,1);
    print(tail); 
    InsertNode(tail,1,2);
    print(tail);
    InsertNode(tail,1,3);
    print(tail);



    deletenode(tail, 2);
    print(tail);

    return 0;
}