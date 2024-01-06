#include <iostream>
using namespace std;
#include <cmath>
#include harmonic_sum.h
double fct_harmonic_sum(int power){
    int i =0;
    int n(pow(10,power));
    double harmonic = 0;
    for(i;i<=n;i++)
    {
        harmonic += (double)(1)/i;
    }
    return harmonic
}

