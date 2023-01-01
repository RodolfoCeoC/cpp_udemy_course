#include <iostream>

using namespace std;

int main() {

    double num_1 = 5.0;
    double num_2 = 7.0;
    char op;
    cout << "Enter an operator (+, -, *, /) \n>> ";
    cin >> op;
    
    switch(op) {
        case '+':
        cout << "Addition" << endl;
        cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
        break;

        case '-':
        cout << "Subtraction" << endl;
        cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
        break;

        case '*':
        cout << "Multiplication" << endl;
        cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
        break;

        case '/':
        cout << "Division" << endl;
        cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
        break;

        default:
        cout << "Incorrect operation" << endl;
        break;
    }
    return 0;
}