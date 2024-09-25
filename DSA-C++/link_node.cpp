#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
    public: 
    int data; 
    Node* next; 

    Node(int data) {
        this->data = data; 
        this->next = NULL; 
    }
};

void insert(Node* &head, int d) {
    Node* temp = new Node(d); 
    temp->next = head; 
    head = temp; 
}

void print(Node* &head) {
    Node* temp = head; 
    
    while (temp != NULL) {
        cout << temp->data << " "; 
        temp = temp->next; 
    }
    cout << endl; 
}

int main() {
    Node* node1 = new Node(10); // First node with data 10
    
    Node* head = node1;  // Initialize head with node1
    print(head);  // Print the list

    insert(head, 12);  // Insert node with data 12
    print(head);  // Print the updated list
    
    return 0; 
}
