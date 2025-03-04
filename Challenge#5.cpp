#include<iostream>
using namespace std;
int main()
{ int amount;
  cout<<"Please Enter Total amount:";
  cin>>amount;
  if(amount<=5000)
  cout<<"You have 5% discount";
  else
  cout<<"You have 10% discount";
  return 0;
}
