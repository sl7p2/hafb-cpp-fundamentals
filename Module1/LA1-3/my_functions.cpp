#include <iostream>
#include "my_functions.h"
using namespace std;

/**
 * @brief Calculate the sum of two numbers
 * 
 * @param num1 :  First number
 * @param num2 :  Second number
 * @return int :  sum of num1 and num2
 * 
 */

int Sum(int num1, int num2)  // pass both parameters by value ( Make your own copy)
{
    return num1 + num2;
}
/**
 * @brief Increments the value of step by 1
 * 
 * @param step: current step value
 * 
 */
void UpdateStep(int& step)  // take the address of the parameter
{
    cout << "Current step: " << step << endl;
    // step++;
    // step = step + 1
    step += 1;
    cout << "New step: " << step << endl;
}