#include <iostream>
using namespace std;
int main()
{
    int age;    //int: signed integers
    // cout: for system output
    std::cout << "hellow c++" << std::endl;
    std::cout << "Another Line" <<std::endl;
    cout << "getting it" << endl;
    // cin: for system/user input
    cout << "what is your age?" << endl;
    cin >> age; 
    cout << "I see you are:" << age << endl;
    // sizeof(): get the size of the variable
    cout << "Integers are: " << sizeof(int) << " bytes." << endl;
    cout << "Min Integer value: " << INT32_MIN <<
        "Max Integers value: " <<INT32_MAX << "bytes." << endl;

    return 0;
}