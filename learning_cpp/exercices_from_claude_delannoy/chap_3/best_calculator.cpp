#include <iostream>
using namespace std;
int framework_calculator(double num1, double num2, double result)
{
    char op;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed.";
                return -1;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
            } else {
                cout << "Error! Division by zero is not allowed.";
                return -1;
            }
            break;
        default:
            cout << "Invalid operator!";
            return -1;
    }

    cout << "Result: " << result << endl;
    return 0;
}

int main() {
    double num1, num2, result;
    bool power_button = true;
    cout<<"Power button :"<<power_button<<endl;
    cout<<"For switching on enter 1\n";
    cout<<"For switching off enter 0\n";
    do
    {
        framework_calculator(num1,num2,result);
        cout<<"Power button: ";
        cin>>power_button;
    } while (power_button);
    
    return 0;
}
