/*Cho một xâu kí tự chỉ gồm các dấu ngoặc {, }, (, ), [, ].  Một xâu kí tự được định nghĩa là hợp lệ như sau: 

Một xâu rỗng là một xâu hợp lệ.
Nếu xâu A là một xâu hợp lệ thì các xâu (A), {A}, [A] cũng là các xâu hợp lệ.
Nếu xâu A và B là xâu hợp lệ thì xâu AB cũng là xâu hợp lệ.
Bạn hãy viết chương trình kiểm tra xem một xâu kí tự có hợp lệ hay không.
Đầu vào
Dữ liệu vào gồm nhiều dòng từ bàn phím:
-Dòng đầu tiên chứa số nguyên T là số lượng xâu kí tự cần kiểm tra. 
-T dòng tiếp theo, mỗi dòng chứa một xâu kí tự cần kiểm tra (T≤10, độ dài xâu không vượt quá 10^4)
Đầu ra
Với mỗi xâu kí tự, in ra  màn hình yes nếu đó là xâu hợp lệ,  in ra no nếu ngược lại .
For example:
Input:
2
{()[]}
([)]
Result:
yes
no
*/
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Hàm kiểm tra xem một cặp ngoặc có phù hợp hay không
bool isMatchingPair(char opening, char closing) {
    if (opening == '(' && closing == ')') return true;
    if (opening == '{' && closing == '}') return true;
    if (opening == '[' && closing == ']') return true;
    return false;
}

// Hàm kiểm tra tính hợp lệ của xâu kí tự
bool isBalanced(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[') {
            s.push(expression[i]);
        } else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']') {
            if (s.empty() || !isMatchingPair(s.top(), expression[i])) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Đọc kí tự newline sau T

    for (int t = 0; t < T; t++) {
        string expression;
        getline(cin, expression);

        if (isBalanced(expression)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
