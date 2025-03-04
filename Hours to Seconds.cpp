#include<iostream>
using namespace std;
int main()
{ int hours,seconds,hoursperseconds;
     hoursperseconds = 24*60*60; 
    cout << "Enter the number of hours: ";
    cin >> hours;
    seconds =  hoursperseconds;
    cout << hours << " hrs is Equal to " << seconds << " seconds" << endl;
     return 0;
}

