#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    
    cout << "input: ";
    getline(cin, s); 
    // Đảo ngược chuỗi
    string reversed(s.rbegin(), s.rend());
    
    cout << "output: " << reversed << endl;
    
    return 0;
}
