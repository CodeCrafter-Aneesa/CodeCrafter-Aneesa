#include<iostream>
using namespace std;
int main()
{ float charge,time,current;
    cout << "Enter the charge: ";
    cin >> charge;        
    cout << "Enter the time: ";
    cin >> time;
    current=charge/time;
    cout << "current: " << current << " ampere" << endl;

    return 0;
}
