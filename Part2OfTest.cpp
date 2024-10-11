#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Calculator Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Power\n";
    cout << "Choose an operation: ";
    cin >> choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (choice == 1) {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    }
    else if (choice == 2) {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    }
    else if (choice == 3) {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    }
    else if (choice == 4) {
        if (num2 == 0) {
            cout << "Error: Division by zero" << endl;
        }
        else {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
    }
    else if (choice == 5) {
        result = pow(num1, num2);
        cout << "Result: " << result << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
