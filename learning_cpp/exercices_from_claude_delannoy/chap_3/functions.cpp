#include <iostream>
using namespace std;
/*
type name_of_the_function(variable_1,variable_2,...,variable_n)
    {
        instruction
    }
*/
// Pass by value <=> passing a copy of x
// Immutable Data
void passByValue(int x) {
    cout<<"passByValue\n";
    x = 20;
    cout<< "x :"<< x <<endl;
}

// Pass by reference <=> passing the adress of the variable
// mutable Data be careful but more memory efficient than passing by value
void passByReference(int &x) {
    cout<<"passByReference\n";
    x = 20;
    cout<< "x :"<< x <<endl;
}

int main() {
    int value = 10;

    passByValue(value);
    std::cout<<"value :"<<value<<endl;
    // 'value' remains 10, unchanged by passByValue()

    passByReference(value);
    std::cout<<"value :"<<value<<endl;
    // 'value' becomes 20 after passByReference()

    return 0;
}
