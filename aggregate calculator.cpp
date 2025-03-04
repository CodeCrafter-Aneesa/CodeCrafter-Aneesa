                                                                                                                                        
#include<iostream>                                                                                                                                       
using namespace std;
int main()
{ int matric,intermediate,Ecat;
    matric = 1100;
    intermediate =550;
    Ecat = 400;
    cout << "Enter the marks of matric: ";
    cin >> matric;
    cout << "Enter the marks of intermediate: ";
    cin>>intermediate;
    cout<<"Enter the marks of Ecat:";
    cin>>Ecat;
    float aggregate;
  aggregate=  (25.0 / 100 * matric) + (45.0 / 100 * intermediate) + (30.0 / 100 * Ecat);
    cout << "Your aggregate score is: " << aggregate << "%" << endl;

    return 0;
}

