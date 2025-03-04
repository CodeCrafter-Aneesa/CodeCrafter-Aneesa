#include<iostream>
using namespace std;
int main()
{ int ageinyears,days,ageperdays;
     ageperdays =ageinyears*365 ; 
    cout << "Enter your age in years: ";
    cin >> ageinyears;
    days = ageinyears*365;
    cout << ageinyears << " age is equal to " << days << " days" << endl;
     return 0;
}

