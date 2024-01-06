#include <iostream>
#include <cmath>
using namespace std;

double add_sub(double a, double b, char method = 'a') {
    if (method == 'a') return a + b;
    else return a - b;
}

double mult_div(double a, double b, char method = 'm') {
    if (method == 'm') return a * b;
    else return a / b;
}

int main() {
    double a, b;
    char method = 'a';
    int add_mul;

    cout << "Worst Calculatrice ever\n";
    do {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Do you want to add/sub (enter 1) or mult/div (enter 0): ";
        cin >> add_mul;

        if (add_mul == 1) {
            cout << "Do you want to add( write 'a') or sub: ";
            cin >> method;
            cout << "The result is: " << add_sub(a, b, method) << endl;
        } else {
            cout << "Do you want to multiply( write 'm') or div: ";
            cin >> method;
            cout << "The result is: " << mult_div(a, b, method) << endl;
        }
    } while (add_mul == 1 || add_mul == 0);

    return 0;
}
