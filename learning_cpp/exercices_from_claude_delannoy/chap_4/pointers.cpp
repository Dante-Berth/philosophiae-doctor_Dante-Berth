#include <iostream>
using namespace std;
int main(){
    int* adi; // adi is an adress of integer
    float * adf; // adf is an adress of float
    int n = 3;
    int m;
    adi = &n; // adi gets "n" adress
    m = n;
    cout<<(m == *adi)<<endl;
    adi++; // pointer on the next adress not anymore on the adress of "n"
    cout<<(m == *adi)<<endl;
    cout<<((adi-1) == (&n))<<endl;// cout<<(adi-1) == (&n)<<endl; does not work , parenthesis needed
    return 0;
}