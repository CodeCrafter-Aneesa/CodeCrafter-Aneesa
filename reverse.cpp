#include<iostream>
using namespace std;
int main()
{ int number,tth,rem,th,rem1,h,rem2,t,u;
  number=78234;
  tth=number/10000;
  rem=number%10000;
  th=rem/1000;
  rem1=rem%1000;
  h=rem1/100;
  rem2=rem1%100;
  t=rem2/10;
  u=rem2%10;
  cout<<"u"<<"t"<<"h"<<"th"<<"tth";
  return 0;
}
