#include <iostream>
using namespace std;

int main()
{
    // Calculate MBI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    float weight = 0, height = 0, bmi = 0;

    cout << " BMI Calculater" << endl;
    cout << "Enter your weight in kg?"  << endl;
    cin >> weight;
    cout << "Enter your height in meters?" << endl;
    cin >> height;
    //calculate bmi
    bmi = weight/(height * height);
    cout << "Your BMI is: "  << bmi << endl;
    
    return 0;
}