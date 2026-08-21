#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }
    else if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = factorial(n);

    if (result != -1) {
        cout << "Factorial = " << result << endl;
    }

    return 0;
}