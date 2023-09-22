/*
Cho hai dãy số (với các phần tử đôi một khác nhau) A và B, tập hợp các phần tử thuộc dãy A là tập con của tập hợp các phần tử thuộc dãy B.
Với mỗi phần tử thuộc dãy A tìm vị trị tương ứng của phần tử này trong dãy B và tìm phần tử lớn hơn gần nhất ở bên phải của phần tử này.
Nếu không tồn tại phần tử nào, in ra −1


Ví dụ: Dãy A gồm 3 phần tử [3,1,2], dãy B gồm 4 phần tử [3,1,4,2]

-Với phần tử 3 thuộc dãy A, ta tìm thấy phần tử 4 là phần tử lớn hơn gần nhất ở bên phải của 3 trong dãy B
-Với phần tử 1 thuộc dãy A, ta tìm thấy phần tử 4 là phần tử lớn hơn gần nhất ở bên phải của 1 trong dãy B
-Với phần tử 2 thuộc dãy A, ta không tìm thấy phần tử nào là phần tử lớn hơn gần nhất ở bên phải của 2 trong dãy B
Đầu vào
Đầu vào từ bàn phím gồm 3 dòng. 
-Dòng đầu tiên chứa 2 số nguyên m,n (n,m≤1000) tương ứng là số phần tử của dãy A và dãy B
-Dòng thứ 2 chứa n số nguyên là các phần tử của dãy A
-Dòng thứ 3 chứa n số nguyên là các phần tử của dãy B. Các số nguyên trên cùng một dòng cách nhau bởi một dấu cách.

Đầu ra
Phần tử lớn hơn gần nhất ở bên phải của từng phần tử tương ứng trong dãy A trong dãy B
For example:

Input
3 4
3 1 2
3 1 4 2

Result
4 4 -1

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    vector<int> result(n, -1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                for (int k = j + 1; k < m; k++) {
                    if (B[k] > A[i]) {
                        result[i] = B[k];
                        break;
                    }
                }
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}

