#include <iostream> /* a preprocessor directive that tells the compiler to include the contents of the iostream library before compiling the program. 
include C++ <=> import Python*/ 
using namespace std;
#include <vector>
#include <string>

int main()
{
    cout << "Exercice -inf" << endl;
    vector<string> msg {"Hello ", "C++ ", "World ", "from ", "VS Code ", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word;
    }
    cout << endl;
    int m = 3;
    cout <<typeid((float)m).name()<<endl; // type of the variable can be changed thanks to (new_type) variable 
    /*Exercice 2...5*/
    cout << "Exercice 2" << endl;
    char c ='\x01';
    short int p = 10;
    float u = 10;
    cout << typeid(p+3).name() << endl; // that should be an int
    cout << typeid(c+1).name() << endl; // that should be an int
    cout << typeid(p+c).name() << endl; // that should be an int
    cout << typeid(u+10).name() <<endl; // that should be an float
    cout << typeid((int) u + p).name()<<endl; // that should be an int
    int n = 5, p_2 =9;
    int q;
    float x ;
    
    cout << "Exercice 3" << endl;
    cout << (int)(p_2+0.5)/n << endl; // (int)9.5 => 9 9/5 ( two int) = 1
    cout << (p_2+0.5)/n << endl; // 9.5/5 = 1.9 because only floats
    cout << n * (p_2>n?n:p_2)<<endl; // if p_2 is superior to n returns n else returns p_2,  in our case it is 25 = n * n

    cout << "Exercice 5" << endl;
    int k,l;
    k = 0; l = k++; // variable ++ is post incremental while ++ variable is pre incremental
    cout << "A : k =" <<k << " l = "<<l <<"\n";
    k = 3; l = 5; m = k*=--l; // m = k*=--l <=> m = (k=k*(l-1)) thus m = 12
    cout << "B : k = " << k << " l = " << l <<" m = " << m << "\n";

    cout << "Exercice 7" << endl;
    /* operators && and || evaluate their second operand only when necessary*/ 
    n = 5; p =2;

    q = ++n && ++p == 3;
    cout << "A : n = "<< n << " p = " << p << " q = " << q << "\n";

    n = 5; p =2;
    q = ++n && p++ == 3;// p++ == 3 is understood by the compiler as is it correct to say than p equals three and then add one to p
    cout << "B : n = "<< n << " p = " << p << " q = " << q << "\n";

    n = 5; p =2;
    q = ++n || ++p == 3;
    cout << "C : n = "<< n << " p = " << p << " q = " << q << "\n";

    n = 5; p =2;
    q = ++n || p++ == 3;
    cout << "D : n = "<< n << " p = " << p << " q = " << q << "\n";

    
}