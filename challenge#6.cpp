#include<iostream>
using namespace std;
int main()
{  int salary,priceoflaptop,total,amount,numberofmonths;
   float advance;
   salary=10000;
   advance=(50/100)*10000*6;
   total=salary*advance;
   if(total==50000)
   cout<<"You can buy a laptop";
   priceoflaptop=50000;
   amount=priceoflaptop-total;
   numberofmonths=amount/salary*0.5;
   cout<<"numberofmonths"<<numberofmonths;
   return 0;
   }
