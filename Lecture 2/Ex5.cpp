#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main() {
    std::stack<int> mystack;
    int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character after reading n

    for (int i = 0; i < n; i++) {
        std::string operation;
        std::getline(std::cin, operation);

        if (operation.substr(0, 4) == "push") {
            int x = std::stoi(operation.substr(5));
            mystack.push(x);
        } else if (operation == "pop") {
            if (!mystack.empty()) {
                mystack.pop();
            }
        }
    }

    // Store the elements in a vector before printing
    std::vector<int> result;
    while (!mystack.empty()) {
        result.push_back(mystack.top());
        mystack.pop();
    }

    // Print the resulting stack
    for (int i = result.size() - 1; i >= 0; i--) {
        std::cout << result[i] << " ";
    }

    return 0;
}
