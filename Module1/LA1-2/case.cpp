/**
 * @file case.cpp
 * @author your name (you@domain.com)
 * @brief Multiple IF-Statement and CASE
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    char code;
    cout << "Enter the specification code:";
    cin >> code;

    // == operator to campare values
    //when comparing characters use single ticks ' '
    //if(code == 'S')
    //{
    //    cout << "The item is space exploration grade."  << endl;
    //}

    // Use a switch statement
    switch (code)
    {
    case 'S':  //like an IF statement with OR case (||)
    case 's':  
        cout << "The item is space exploration grade." <<endl;
        break;      //exit your switch statement

    case 'M':  //like an IF statement
        cout << "The item is Military grade." <<endl;
        break;      //exit your switch statement

    case 'T':  //like an IF statement
        cout << "The item is Toy grade." <<endl;
        break;      //exit your switch statement

    default:        //like an ELSE statement
        cout << "The item not supported."  << endl;
        break;      
    }
    return 0;
}