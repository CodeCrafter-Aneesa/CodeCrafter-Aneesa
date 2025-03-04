#include<iostream>
using namespace std;
int main()
{ float acceleration,initialvelocity,time;
  float finalvelocity;
    cout << "Enter the Acceleration: ";
    cin >> acceleration;     
	cout <<"Enter the Initial Velocity:"; 
	cin >> initialvelocity; 
	cout <<"Enter the Time:";
	cin >> time; 
    finalvelocity=(acceleration*time)+initialvelocity;
    cout << "finalvelocity= " << finalvelocity << " m/s" << endl;
    return 0;
}

