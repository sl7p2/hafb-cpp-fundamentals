#include <iostream>
using namespace std;

// Constants
const float kMetersToInches = 39.37;
const float kKiloToPound = 2.204;
const int kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHighBMILimit = 24.9;

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

    // Task: Now, convert it to imperial units
    // Calculate BMI (imperial); (weight(lbs) * 703)/[height(in)]^2
    // 1 meter + 39.37 inches, 1 kg = 2.204 lbs

    weight = weight * kKiloToPound;  // convert to lbs
    height = height * kMetersToInches;  //convert to inches
    bmi = (weight * kBMIImperial)/(height*height);
    cout << "Your BMI (imperial) is: "  << bmi << endl;

    // Task: Print if they are in the "good" range: BMI
    // && (AND) to test two conditions

    if(bmi > kLowBMILimit && bmi < kHighBMILimit)
    {
        cout << "Your BMI " << bmi << "is good" << endl;
    }
    else
    {
        cout << "Your BMI " <<bmi << " is bad" << endl;
            }
    

    cout << "Thank you for using BMI program" <<endl;

    return 0;
}