# include <iostream> /* a preprocessor directive that tells the compiler to include the contents of the iostream library before compiling the program. 
include C++ <=> import Python*/ 
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}