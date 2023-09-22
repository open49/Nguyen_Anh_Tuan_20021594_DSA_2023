/*Cho cấu trúc một nút trong cấu trúc danh sách liên kết như bên dưới:

struct Node
    int value;
    Node *nextNode;
};
Bạn hãy viết hàm Node* addLastNode(Node *head, int value)  để thêm một phần tử có giá trị bằng value
 vào cuối danh sách liên kết hiện tại (phần tử đầu tiên của danh sách hiện tại là head
) . Hàm trả lại danh sách liên kết mới.*/

Node* addLastNode(Node *head, int value)
{
    Node *newNode = new Node; // Tạo một nút mới để chứa giá trị mới
    newNode->value = value;
    newNode->nextNode = NULL; // Đặt con trỏ next của nút mới là NULL, vì nó sẽ là nút cuối cùng trong danh sách liên kết

    if (head == NULL) // Trường hợp danh sách rỗng
    {
        // Nếu danh sách rỗng, nút mới trở thành nút đầu tiên
        head = newNode;
    }
    else
    {
        Node *current = head;
        // Duyệt danh sách liên kết để tìm nút cuối cùng
        while (current->nextNode != NULL)
        {
            current = current->nextNode;
        }
        // Gán con trỏ next của nút cuối cùng là nút mới
        current->nextNode = newNode;
    }

    return head; // Trả lại danh sách liên kết sau khi đã thêm phần tử mới vào cuối
}
