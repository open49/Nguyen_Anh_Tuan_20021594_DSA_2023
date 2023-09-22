#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    // Input 5 real numbers
    cout << "Enter 5 real numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Find the minimum and maximum among the input numbers
    int smallest = num1;
    int greatest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }
    if (num2 > greatest) {
        greatest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }
    if (num3 > greatest) {
        greatest = num3;
    }

    if (num4 < smallest) {
        smallest = num4;
    }
    if (num4 > greatest) {
        greatest = num4;
    }

    if (num5 < smallest) {
        smallest = num5;
    }
    if (num5 > greatest) {
        greatest = num5;
    }

    // Calculate the sum of the smallest and greatest numbers
    int sum = smallest + greatest;

    // Output the result
    cout << "Sum of the greatest and smallest numbers: " << sum << endl;

    return 0;
}
