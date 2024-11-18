#include <iostream>
using namespace std;

// Definition for singly-linked list.
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        this->data = 0;
        this->next = NULL;
    }

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // Parameterized constructor with next node
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

// Recursive function to reverse the linked list
void reverse(Node* &head, Node* cur, Node* prev) {
    if (cur == NULL) {
        head = prev;
        return;
    }

    Node* forward = cur->next;  // Save the next node
    reverse(head, forward, cur);  // Recursive call with next node and current node
    cur->next = prev;  // Reverse the link
}

// Function to initiate the reversal
Node* reverseLinkedList(Node *head) {
    Node* cur = head;
    Node* prev = NULL;
    reverse(head, cur, prev);
    return head;
}


// EASIER RECURSIVE SOLUTION


// Node* reverseLinkedList(Node *head)
// {

//     if(head == NULL || head -> next == NULL){
//         return head;
//     }

//     Node* head2 = reverseLinkedList(head -> next);
//     head -> next -> next = head;
//     head -> next = NULL; 
//     return head2;

// }



// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to demonstrate the reversal
int main() {
    // Creating the linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
