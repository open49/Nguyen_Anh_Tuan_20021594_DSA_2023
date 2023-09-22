
// Sử dụng cấu trúc danh sách liên kết như ở bài trước, viết hàm int getSize(Node *head) trả về số lượng phần tử trong một danh sách liên kết.


#include <iostream>

using namespace std;

struct Node{
    int value;
    Node *nextNode;
};

int getSize(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->nextNode;
    }
    return count;
}


Node* addLastNode(Node *head, int value)
{
    if (head == NULL)
    {
        head = new Node;
        head->value = value;
        head->nextNode = NULL;
    }
    else
    {
        Node *tmp = head;
        while (tmp->nextNode != NULL)
            tmp = tmp->nextNode;
        Node *newNode = new Node;
        newNode->value = value;
        newNode->nextNode = NULL;
        tmp->nextNode = newNode;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    int number;
    while (cin >> number)
    {
        head = addLastNode(head,number);
    }
    cout << getSize(head);
    return 0;
}
