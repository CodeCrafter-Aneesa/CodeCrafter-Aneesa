#include<iostream>
using namespace std;
int main()
{ float pounds,kilograms;
  float convertedvalue;
    convertedvalue =0.45;
    cout << "Enter weight in pounds (lbs): ";
    cin >> pounds;
    kilograms=pounds*convertedvalue;
    cout << "Weight in kilograms: " << kilograms << " kg" << endl;

    return 0;
}
