#include<iostream>
using namespace std;
int main()
{ int numberofpolygonsides,n,sumofinternalangles;
    cout << "Enter the number of polygon sides: ";
    cin >> numberofpolygonsides,n;        
    sumofinternalangles =(numberofpolygonsides-2)*180;
    cout << "sumofinternalangles= " << sumofinternalangles << " degrees" << endl;
    return 0;
}

