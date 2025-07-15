#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long double num1, num2;
    char operation;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /, ^): ";
    cin >> operation;

    switch (operation){
        case '+':
            cout << "Answer: " << num1 + num2 <<endl;
            break;

        case '-':
            cout << "Answer: " << num1 - num2 << endl;
            break;      
        
        case '*':
            cout << "Answer: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Answer: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        case '^':
            cout << "Answer: " << pow(num1, num2) << endl;
            break;
    }
    cout << "Thank you for using Yin's most basic ahhhhh calculator! We wish you good luck on your future mathematical adventures :)" << endl;
    return 0;
}