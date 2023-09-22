#include <iostream>
using namespace std;

// Doubly linked list node structure
struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Doubly linked list class
class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to add a new node to the end of the list
    void append(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
};

// Function to count triplets with a sum of 0
int count_triplets(DoublyLinkedList& dll) {
    if (dll.head == nullptr || dll.head->next == nullptr || dll.head->next->next == nullptr) {
        return 0;
    }

    int count = 0;
    Node* current = dll.head->next; // Start from the second element
    while (current->next != nullptr) {
        int sum = current->prev->data + current->data + current->next->data;
        if (sum == 0) {
            count++;
        }
        current = current->next;
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;

    DoublyLinkedList dll;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        dll.append(num);
    }

    int result = count_triplets(dll);
    cout << result << endl;

    return 0;
}
