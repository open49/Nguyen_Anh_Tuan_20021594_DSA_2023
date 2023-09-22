/*Cho một dãy số A, bạn có thể thực hiên 3 loại lệnh sau với một dãy số.
1 x: Thêm phần tử x vào cuối dãy số.
2: Xóa phần tử cuối cùng của dãy số.
3: In ra phần tử cuối cùng của dãy số.
Bạn hãy viết chương trình thực hiện N lệnh trên dãy số A. Ban đầu dãy số A không chứa phần tử nào.
Đầu vào 
Dữ liệu vào gồm nhiều dòng nhập từ bàn phím: Dòng đầu tiên chứa số nguyên N
N dòng tiếp theo, mỗi dòng tương ứng với một trong 3 loại lệnh. (N≤105,x≤109)
Đầu ra
Với mỗi lệnh loại 3, in ra màn hình phần tử cuối cùng trong dãy số.
For example:
Input
10
1 42
2
1 14
3
1 28
3
1 60
1 78
2
2
result
14
28
*/
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;
    stack<int> maxStack;

    for (int i = 0; i < n; ++i) {
        int cmd;
        cin >> cmd;

        if (cmd == 1) {
            int x;
            cin >> x;
            s.push(x);
            if (maxStack.empty() || x >= maxStack.top()) {
                maxStack.push(x);
            }
        } else if (cmd == 2) {
            if (!s.empty()) {
                if (s.top() == maxStack.top()) {
                    maxStack.pop();
                }
                s.pop();
            }
        } else if (cmd == 3) {
            if (!maxStack.empty()) {
                cout << maxStack.top() << endl;
            }
        }
    }

    return 0;
}

