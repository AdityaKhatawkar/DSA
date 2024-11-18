#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) // Using constructor to create a node
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data; 
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory freed for node with data " << value << endl;
        
    }
    
};



void InsertAtHead(Node *&head, int d)
{
    Node *NewNode = new Node(d); // create new node
    if (head == NULL)
    {
        head = NewNode;
        return;
    }
    NewNode->next = head; // make the new node point to head
    head = NewNode;       // make this new node the new head
}



/*------------------------------------------------------------------------------------------------------------------*/

// LESS EFFICIENT VERSION LEARNT IN 2nd SEM

/*void InsertAtEnd(Node *&head, int d)
{
    Node *NewNode = new Node(d);    //Create new node
    Node *cur = head;               //Create a pointer to head
    while (cur->next != NULL)       //Traverse till last node
    {
        cur = cur->next;
    }
    cur->next = NewNode;            //Make the last node point to the newly created node
}*/

/*------------------------------------------------------------------------------------------------------------------*/



void InsertAtEnd(Node *&tail, int d)
{
    Node *NewNode = new Node(d);
    if (tail == NULL)
    {
        tail = NewNode;
        return;
    }
    tail->next = NewNode;
    tail = NewNode;
}




void InsertAtPosition(Node* &head, Node* &tail, int position, int d){

    if(position == 1){             //If inserting as first position
        InsertAtHead(head, d);
        return;
    }

    Node* cur = head; 
    int cnt = 1; 

    while(cnt < position-1){ 
        cur = cur -> next;          //Take cur to node before the position
        cnt++;
    }

    if(cur -> next == NULL){        //Inserting at last position
        InsertAtEnd(tail,d);
        return;
    }

    Node* NewNode = new Node(d);
    NewNode -> next = cur -> next;  //Point new node to the next of current node
    cur -> next = NewNode;          //Change the current nodes next to the newly created node
}




void PrintLinkedList(Node *&head)
{
    Node *cur = head; // make a pointer to head
    while (cur != NULL)
    {                             // till the last node
        cout << cur->data << " "; // print value of current node
        cur = cur->next;          // go to the next node
    }
}



void DeleteNode(Node* &head, Node* &tail, int position){

    if(position == 1){          //Deleting first node
        Node* cur = head;
        head = head -> next;
        cur -> next = NULL;
        delete cur;             //free momory of first node
    }     

    else{                       //For middle or last node
        Node* cur = head;       //Node to be deleted
        Node* prev = NULL;      //Previous node

        int cnt = 1;

        while(cnt < position){ //Till the position to be deleted is reached
            prev = cur;         //previous to current
            cur = cur -> next;  //current to next
            cnt++;
        }

        if(cur -> next == NULL){
            tail = prev;            //Handling tail
        }

        prev -> next = cur -> next; //previous pointing to the next of current
        cur -> next = NULL;         //remove the pointer
        delete cur;                 //delete current
    }      

}



int main()
{
    Node *head = new Node(10);
    Node *tail = head;              // Always pointing to last node
    cout << head->data << endl;
    cout << head->next << endl;




    // INSERTING AT THE HEAD
    cout << endl << endl;
    cout << "INSERTING AT THE HEAD" << endl;

    InsertAtHead(head, 5);
    PrintLinkedList(head);

    cout << endl;

    InsertAtHead(head, 15);
    PrintLinkedList(head);




    // INSERTING AT THE END
    cout << endl << endl;
    cout << "INSERTING AT THE END" << endl;

    InsertAtEnd(tail, 11);
    PrintLinkedList(head);



    // INSERTING AT POSITION 
    cout << endl << endl;
    cout << "INSERTING AT POSITION" << endl;

    InsertAtPosition(head,tail,1,22);
    PrintLinkedList(head);



    //DELETE AT POSITION
    cout << endl << endl;
    cout << "DELETING AT POSITION" << endl;

    DeleteNode(head, tail, 5);
    PrintLinkedList(head);
    cout<< endl <<"Tail is: " << tail->data << endl;

    return 0;
}