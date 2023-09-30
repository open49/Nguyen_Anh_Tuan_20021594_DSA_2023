#include <iostream>


using namespace std;


int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int main() {
    int m, n;

    // Input two positive integer numbers
    cout<<"input : ";
    cin>>m>>n;

    if (m <= 0 || n <= 0) {
        cout << "Both numbers must be positive integers." <<endl;
        return 1; 
    }

    // Calculate and print the GCD
    int result = gcd(m, n);
    cout << "The greatest common divisor of " << m << " and " << n << " is " << result <<endl;

    return 0;
}
