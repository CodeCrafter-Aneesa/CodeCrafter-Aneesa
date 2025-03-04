#include<iostream>
using namespace std;
int main() 
{float current,voltage,power;
    cout << "Enter the voltage: ";
    cin >> voltage;        
    cout << "Enter the current: ";
    cin >> current;
    power=current*voltage;
    cout << "power: " << power << " watts" << endl;

    return 0;
}
