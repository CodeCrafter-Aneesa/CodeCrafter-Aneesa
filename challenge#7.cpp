#include<iostream>
using namespace std;
int main()
{ float number1,number2;
 cout<<"Enter the number:";
 cin>>number1;
 cout<<"Enter the number:";
 cin>>number2;
 char operation;
 cout<<"Enter the operation:";
 cin>>operation;
 if (operation=='+')
 cout<<"Result"<<number1-number2<<endl;
 if (operation=='-')
 cout<<"Result"<<number1*number2<<endl;
 if (operation=='*')
 cout<<"Result"<<number1/number2<<endl;
 if (operation=='/')
 cout<<"Result"<<number1+number2<<endl;
 return 0;
}
