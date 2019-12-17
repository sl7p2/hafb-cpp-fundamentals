
#include "factor.h"
#include <iostream>
using namespace std;

/**
 * @brief calculate the number of instances divisible by
 * 
 * 
 * @return * void 
 */
 
void FactorMod3()
{
    unsigned int count = 0;
    for(unsigned int x = 1; x <= 30; ++x)
    {
        if (x % 3 == 0)
        {
            count++;
        }
    }
    cout<< "Result is now: "  << count << endl;
}

/**
 * @brief Calculate the number of instances divisible 
 * by input paramenter in the range 1 through 30
 * @param mod_number: the divisible number
 */


void FactorModX(int mod_number)
{
    // knows about mod_numbers
    unsigned int count = 0;
    for(unsigned int x = 1; x <= 30; ++x)
    {
        if (x % mod_number == 0)
        {
            count++;
        }
    }
    cout<< "Result is now: "  << count << endl;

}
/**
 * @brief same but with range
 * 
 * 
 */

void FactorModXRange(int mod_number, int max_range)
{
    
    unsigned int count = 0;
    for(unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
            count++;
        }
    }
    cout<< "Result is now: "  << count << endl;
}

/**
 * @brief Get the Factor Mod X Range object
 * 
 * @param mod_number modulus number
 * @param max_range : maximum range
 * @return unsigned int : number of instances
 */


unsigned int GetFactorModXRange(int mod_number, int max_range)
{
    unsigned int count = 0;
    for(unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
            count++;
        }
    }
    

    return count;
}