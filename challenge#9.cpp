#include<iostream>
using namespace std;
int main()
{ string brother1,brother2,brother3,youngest;
  int age1,age2,age3,minimum;
  cout<<"Enter name of brother1:";
  cin>>brother1;
  cout<<"Enter name of brother2:";
  cin>>brother2;
  cout<<"Enter name of brother3:";
  cin>>brother3;
  cout<<"Enter age of brother1:";
  cin>>age1;
  cout<<"Enter age of brother2:";
  cin>>age2;
  cout<<"Enter age of brother3:";
  cin>>age3;
  minimum=age2;
  youngest=brother2;
  if (age1 < minimum) {
    minimum=age1;
	youngest=brother1;  }
  if (age3 < minimum){
  minimum=age3;
  youngest=brother3;}
  cout<<"Youngest brother is"<<youngest;
  return 0;
}
