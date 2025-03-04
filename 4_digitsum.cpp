#include <iostream>
using namespace std;

int main() {
    int num,tth,rem,th,rem1,h,rem2,t,u, sum;
    cout << "Enter a 4-digit number: ";
    cin >> num;
  tth=num/1000;
  rem=num%1000;
  th=rem/100;
  rem1=rem%100;
  h=rem1/10;
  rem2=rem1%10;
  t=rem2/10;
  u=rem2;
  sum=tth+th+h+t+u;
    cout << "Sum of the digits: " << sum << endl;
    return 0;
}


