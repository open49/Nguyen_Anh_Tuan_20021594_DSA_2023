#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // Clear the newline character from the previous input

    queue<int> q;  // Create an empty queue

    for (int i = 0; i < n; i++) {
        string operation;
        cin >> operation;

        if (operation == "enqueue") {
            int x;
            cin >> x;
            q.push(x);  // Enqueue the number x
        } else if (operation == "dequeue") {
            if (!q.empty()) {
                q.pop();  // Dequeue the element at the head of the queue
            }
        }
    }

    // Print the resulting queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
