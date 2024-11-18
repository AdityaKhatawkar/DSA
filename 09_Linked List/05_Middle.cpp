#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        this->data = 0;
        this->next = nullptr;
    }

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    // Parameterized constructor with next pointer
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

// Function to get the length of the linked list
int getLength(Node* head) {
    int len = 0;
    while (head != nullptr) {
        len++;
        head = head->next;
    }
    return len;
}

// Function to find the middle node of the linked list
Node* findMiddle(Node* head) {
    int len = getLength(head);
    int middleIndex = len / 2;

    Node* temp = head;
    int cnt = 0;
    while (cnt < middleIndex) {
        temp = temp->next;
        cnt++;
    }
    return temp;
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


//Using slow fast 
Node* findMid(Node* head){
    if(head == NULL || head -> next == NULL)
        return head; 

    if(head -> next -> next == NULL){
        return head -> next;
    }

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;

}


int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Find the middle node
    Node* middle = findMiddle(head);

    // Print the middle node's data
    cout << "The middle node's data is: " << middle->data << endl;

    return 0;
}
