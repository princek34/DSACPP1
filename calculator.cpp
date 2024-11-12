// #include <iostream>
// using namespace std;

// class Calculator {
// public:
//     // Constructor
//     Calculator() {
//         cout << "Calculator is ready to use." << endl;
//     }

//     // Destructor
//     ~Calculator() {
//         cout << "Calculator is shutting down." << endl;
//     }

//     void performCalculation() {
//         double num1, num2;
//         char operation;
//         while (true) {
//             cout << "Enter the first number: ";
//             cin >> num1;
//             cout << "Enter the second number: ";
//             cin >> num2;
//             cout << "Enter the operation (+, -, *, /) or 'q' to quit: ";
//             cin >> operation;

//             if (operation == '+') {
//                 cout << "Result: " << num1 + num2 << endl;
//             } else if (operation == '-') {
//                 cout << "Result: " << num1 - num2 << endl;
//             } else if (operation == '*') {
//                 cout << "Result: " << num1 * num2 << endl;
//             } else if (operation == '/') {
//                 if (num2 == 0) {
//                     cout << "Error: Division by zero is not allowed." << endl;
//                 } else {
//                     cout << "Result: " << num1 / num2 << endl;
//                 }
//             } else if (operation == 'q' || operation == 'Q') {
//                 cout << "Exiting the calculator." << endl;
//                 break;
//             } else {
//                 cout << "Invalid operator! Please enter +, -, *, /, or 'q' to quit." << endl;
//             }
//         }
//     }
// };

// int main() {
//     Calculator calc; // Constructor is called
//     calc.performCalculation();
//     return 0; // Destructor is called when calc goes out of scope
// }
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    char choice;

    do {
        // Get user input for two double values
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        // Get the desired operation
        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;

        // Perform the arithmetic operation
        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operator! Please try again." << endl;
                continue; // Skip to the next iteration if invalid
        }

        // Ask the user if they want to perform another calculation
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Exiting the calculator." << endl;
    return 0;
}

