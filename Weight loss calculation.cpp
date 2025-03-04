#include<iostream>
using namespace std;
int main()
{ string name;
  float weightlossinkilograms;
  int numberofdays,weightlossin15days;
    cout << "Enter the Name: ";
    cin >> name;     
	cout <<"Enter the Weightlossinkilograms:"; 
	cin >> weightlossinkilograms;  
    weightlossin15days=1;
    numberofdays=weightlossin15days*weightlossinkilograms;
    cout << "number of days= " << numberofdays << endl;
    return 0;
}

