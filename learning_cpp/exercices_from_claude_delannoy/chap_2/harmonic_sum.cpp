#include <iostream>
using namespace std;
#include <time.h>
#include <math.h>
int main()
{
    int n(pow(10,9));
    int i = 1;
    clock_t t;
    double harmonic(0);
    t = clock();
    for(i;i<=n;i++)
    {
        harmonic += (double)(1)/i;
    }
    t += -clock();
    double time_taken = double(t)*(-1.0) / CLOCKS_PER_SEC;
    cout << "Time taken : "<< time_taken << " in seconds\n"; 
    cout << "Harmonic sum " << harmonic << " for n equals to " << n << endl;
    return 0;
}