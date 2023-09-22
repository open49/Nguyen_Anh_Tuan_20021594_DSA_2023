/* Sử dụng cấu trúc danh sách liên kết như ở bài trước, viết hàm int getElement(Node *head, int index) trả về giá trị phần tử thứ index trong một danh sách liên kết. Các phần tử được đánh số từ 0.

For example:

Input	Result
3 5 6
3 5 6
*/

int getElement(Node *head, int index)
{
    int count = 0;
    Node *current = head;

    // Duyệt qua danh sách và dừng lại khi đến vị trí index
    while (current != NULL && count < index)
    {
        current = current->nextNode;
        count++;
    }

    // Kiểm tra nếu current là NULL, có nghĩa là danh sách không đủ phần tử
    if (current == NULL)
    {
        cerr << "Không tìm thấy phần tử ở vị trí " << index << endl;
        return -1; // Trả về một giá trị đặc biệt để biểu thị lỗi
    }

    // Trả về giá trị của phần tử tại vị trí index
    return current->value;
}