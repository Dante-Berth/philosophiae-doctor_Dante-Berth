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
    const int ing = 4;
    int t [ing] = {8,5,6,7}; // t is an adress linked to the first element (8)
    cout<< t <<endl;
    cout<< (t+1) <<endl;
    cout<< *(t+1) <<endl;
    cout<< (t+2) <<endl;
    cout<< *(t+2) <<endl;
    int a [3];
    int ii, jj;
    int * adt;
    for (ii=0,jj=0;ii<3;ii++)
    {
        a[ii] = jj++ + ii; // variable ++  post incremental
        cout<<"#########"<<endl;
        cout<<"ii = "<<ii<<endl;
        cout<<"jj = "<<jj<<endl;
        cout<<a[ii]<<endl;
    }
    for (adt = a; adt<(a+3); adt++) 
    {
        cout << *adt<< " ";
        cout << adt ; 
        cout << "\n";
    }
    
    return 0;
}