/*Có 3 dạng truy vấn khác nhau được thực hiện trên một dãy số:
- 1 x thêm phần tử x vào cuối dãy số
- 2 xóa phần tử cuối cùng của dãy số
- 3 in ra phần tử lớn nhất trong dãy số
Cho một dãy số rỗng, bạn hãy viết chương trình thực hiện N truy vấn trên dãy số này.
Đầu vào
Dòng đầu tiên chứa số nguyên N.
N dòng tiếp theo, mỗi dòng tương ứng với một trong 3 loại truy vấn (N≤105,x≤109)
Đầu ra
Với mỗi truy vấn loại 3, in ra phần tử lớn nhất trong dãy số.
For example:
Input
10
1  97
2
1  20
2
1  26
1  20
2
3
1  91
3
output
26
91
*/
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    stack<int> st; // Sử dụng stack để lưu trữ dãy số
    
    for (int i = 0; i < N; i++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int x;
            cin >> x;
            st.push(x); // Thêm phần tử x vào cuối dãy số
        } else if (type == 2) {
            if (!st.empty()) {
                st.pop(); // Xóa phần tử cuối cùng của dãy số (nếu có)
            }
        } else if (type == 3) {
            if (!st.empty()) {
                // Tìm phần tử lớn nhất trong dãy số
                int max_element = st.top();
                stack<int> temp_st = st; // Tạo một stack tạm thời để không thay đổi dãy số gốc
                while (!temp_st.empty()) {
                    if (temp_st.top() > max_element) {
                        max_element = temp_st.top();
                    }
                    temp_st.pop();
                }
                cout << max_element << endl;
            }
        }
    }
    
    return 0;
}
