#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    // Insert a node at position p with value x
    void insert(int p, int x) {
        Node* newNode = new Node(x);
        if (p == 1) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* prev = head;
            for (int i = 1; i < p - 1 && prev != nullptr; i++) {
                prev = prev->next;
            }
            if (prev != nullptr) {
                newNode->next = prev->next;
                prev->next = newNode;
            }
        }
    }

    // Delete a node at position p
    void deleteNode(int p) {
        if (p == 1) {
            if (head != nullptr) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        } else {
            Node* prev = head;
            for (int i = 1; i < p - 1 && prev != nullptr; i++) {
                prev = prev->next;
            }
            if (prev != nullptr && prev->next != nullptr) {
                Node* temp = prev->next;
                prev->next = prev->next->next;
                delete temp;
            }
        }
    }

    // Print the linked list
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

private:
    Node* head;
};

int main() {
    int n;
    std::cin >> n;
    LinkedList linkedList;

    for (int i = 0; i < n; i++) {
        string operation;
        cin >> operation;
        
        if (operation == "insert") {
            int p, x;
            cin >> p >> x;
            linkedList.insert(p, x);
        } else if (operation == "delete") {
            int p;
            cin >> p;
            linkedList.deleteNode(p);
        }
    }

    linkedList.printList();

    return 0;
}
