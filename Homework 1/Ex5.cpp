/*
Cho 2 ngăn xếp chứa các số nguyên không âm A=[a1,a2,....,an],B=[b1,b2,....,bm], phần tử đầu tiên là đỉnh của ngăn xếp.
Pete chơi một trò chơi trên hai ngăn xếp này như sau:
-Ở mỗi lượt chơi, Pete loại bỏ một số phần tử ở đỉnh của một trong hai ngăn xếp.
-Pete tính tổng của các phần tử đã được loại bỏ .
-Trò chơi kết thúc khi tổng của các phần tử được loại bỏ lớn hơn một số nguyên x cho trước.
-Điểm mà Pete nhận được bằng với số phần tử đã được loại bỏ.
Bạn hãy giúp Pete tính số điểm lớn nhất mà anh ấy có thể đạt được.
Đầu vào
Đầu vào từ bàn phím gồm 3 dòng.
-Dòng đầu tiên chứa 3 số nguyên n,m,x (n,m≤105,x≤106).
-Dòng thứ 2 chứa n số nguyên ai.
-Dòng thứ 3 chứa m số nguyên bi (ai,bi≤105).
Các số nguyên trên cùng một dòng cách nhau bởi một dấu cách
Đầu ra
In ra màn hình một số nguyên duy nhất là điểm số lớn nhất mà Pete có thể đạt được
For example:
Input
5 4 10
4 2 4 6 1
2 1 8 5
Result
4
Input	
17 26 62
7 15 12 0 5 18 17 2 10 15 4 2 9 15 13 12 16
12 16 6 8 16 15 18 3 11 0 17 7 6 11 14 13 15 6 18 6 16 12 16 11 16 11
result
6

Input
31 34 5
4 11 16 0 18 17 9 13 7 12 16 19 2 15 5 13 1 10 0 8 0 6 16 12 15 7 1 6 19 16 2
15 8 11 16 6 0 5 11 7 9 8 6 3 3 4 8 17 14 9 5 15 15 1 19 10 0 12 8 11 9 11 18 17 14
result
1

Input
34 31 5
15 8 11 16 6 0 5 11 7 9 8 6 3 3 4 8 17 14 9 5 15 15 1 19 10 0 12 8 11 9 11 18 17 14
4 11 16 0 18 17 9 13 7 12 16 19 2 15 5 13 1 10 0 8 0 6 16 12 15 7 1 6 19 16 2
result
1

*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<int> stackA(n);
    vector<int> stackB(m);

    for (int i = 0; i < n; i++) {
        cin >> stackA[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> stackB[i];
    }

    stack<int> stA, stB;
    int sum = 0;
    int score = 0;

    for (int i = n - 1; i >= 0; i--) {
        stA.push(stackA[i]);
    }

    for (int i = m - 1; i >= 0; i--) {
        stB.push(stackB[i]);
    }

    while (!stA.empty() || !stB.empty()) {
        int a_top = stA.empty() ? 0 : stA.top();
        int b_top = stB.empty() ? 0 : stB.top();

        if (a_top >= b_top) {
            sum += a_top;
            stA.pop();
        } else {
            sum += b_top;
            stB.pop();
        }

        score++;

        if (sum >= x) {
            break;
        }
    }

    cout << score << endl;

    return 0;
}
