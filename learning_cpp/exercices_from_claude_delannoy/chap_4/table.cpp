#include <iostream>
#include "cmath"
using namespace std; 
int main(){
    const int n = 4;
    float t [n];
    int i =0;
    for(i=0;i<n;i++)
        {
            cout<<"Enter a float plz :";
            cin>>t[i];
        }
    for(i=0;i<n;i++)
        {
            cout<<"The float entered at "<< i<< " is :"<<*(t+i)<<std::endl;
        }
    cout<<"End of the program"<<std::endl;

    
    for (size_t i = n; i < (n+5); i++)
    {
        cout<<"The leak memory "<< i<< " is :"<<t[i]<<std::endl;
    }
    
    return 0;

}
/*
int tab_1 [3] [4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};
 == 
 int tab_2 [3] [4] = {
    1,2,3,4,5,6,7,8,9,10,11,12
};

*/