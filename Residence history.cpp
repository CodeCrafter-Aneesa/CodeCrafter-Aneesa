#include<iostream>
using namespace std;
int main()
{ int personage,movefromhouse,moves;  
    cout << "Enter the person's age: ";
    cin >> personage;
    cout<<"Enter the number of times they have moves :";
    cin>>movefromhouse;
  int Averagenumberofyears=(personage)/(movefromhouse+1);
    cout <<"Averagenumberofyearslivedinsamehouse=" << Averagenumberofyears << endl;
    return 0;
}

