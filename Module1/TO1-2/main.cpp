#include <iostream>
#include "factor.h"
using namespace std;

int main()
{
    FactorMod3();
    FactorModX(3);
    FactorModXRange(5, 500);
    unsigned int count = GetFactorModXRange(5, 500);
    cout << "You got: " << count << endl;
    auto count2 = GetFactorModXRange(5, 500);
    cout << "You Got: " << count2 << endl;
    return 0;
}
