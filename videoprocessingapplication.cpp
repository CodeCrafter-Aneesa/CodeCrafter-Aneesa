#include<iostream>
using namespace std;
int main()
{ int numberofminutes,frameperseconds; 
   int totalnumberofframes; 
    cout << "Enter the numberofminutes: ";
    cin >> numberofminutes;
    cout<<"Enter the  frameperseconds:";
    cin>>frameperseconds;
    totalnumberofframes=numberofminutes*frameperseconds*60;
    cout << "totalnumberofframes=" << totalnumberofframes << endl;
    return 0;
}

