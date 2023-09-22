/*Cho một dãy số A, bạn có thể thực hiên 3 loại lệnh sau với dãy số.
1  x: Thêm phần tử x
 vào cuối dãy số.
2: Xóa phần tử đầu tiên của dãy số.
3: In ra phần tử đầu tiên của dãy số.
Bạn hãy viết chương trình thực hiện N truy vấn trên dãy số A .Ban đầu dãy số A không chứa phần tử nào.
Đầu vào
Dữ liệu vào gồm nhiều dòng từ bàn phím:
-Dòng thứ nhất chứa số nguyên N
 -N dòng tiếp theo, mỗi dòng tương ứng với một trong 3 loại lệnh như trên
-(N≤105,x≤109)
Đầu ra
 Với mỗi lệnh loại 3, in ra màn hình phần tử đầu tiên trong dãy số.
For example:
Input
10
1  42
2
1  14
3
1  28
3
1 60
1 78
2
2
output
14
14
*/

#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    deque<int> A;
    deque<int> result;

    for (int i = 0; i < n; i++) {
        int command;
        cin >> command;

        if (command == 1) {
            int x;
            cin >> x;
            A.push_back(x);
        } else if (command == 2) {
            A.pop_front();
        } else if (command == 3) {
            result.push_back(A.front());
        }
    }

    for (int r : result) {
        cout << r << endl;
    }

    return 0;
}
