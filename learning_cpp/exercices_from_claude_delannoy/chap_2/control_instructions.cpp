#include <iostream>
using namespace std;
/*control instructions*/
int main()
{   /* 
    if(condition)
    {
        instruction;
    }
    else
    {
        instruction;
    }
            */
    int p;
    cout << "Enter an integer: ";
    cin >> p;

    if (p % 2 == 0) // need parenthesis , no need ; simiar to : in python, but it is needed to use {instruction}
    {
        cout << p << " is even" << endl;
    }
    else
    {
        cout << p << " is odd" << endl;
    }
    /*
    switch(expression) {
    case value1:
        {instruction};
        break;
    case value2:
        {instruction};
        break;
    // ... more cases
    default:
        // code to be executed if expression doesn't match any case
    }
    valuei are fixed they cannot vary
    */
   int i = 0;
        for (i;i<4;i++)
        {
            cout << "Enter an integer: ";
            cin >> p;
            switch(p)
            {
                case 0 : cout << "Null\n"; break;
                case 1 : ; break;
                case 2 : cout << "Lower\n";break;
                case 3 : ; break;
                case 4 : cout << "Higher\n";break;
                default : cout << "Draw\n";break;
            }
        }
    /*
    loop:
        do {instruction}
        while (expression);
        (at least one time the instruction would be executed)

        while (expression)
        {instruction}
        (not necessary than the instruction would be executed)
    */
    int n=0;
    do {
        if (n%2==0)
        {
            cout<<n<<" is even \n";
            n +=3 ;
            continue;
        }
        if (n%3==0)
        {
            cout<<n<< " is a multiple of 3";
        }
    }
    while (1);
    return 0;
}
