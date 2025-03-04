
#include<iostream>
using namespace std;
int main()
{ int megabytes,bits,bytes;
  float bitsPerMegabyte;
     bitsPerMegabyte = 8 * 1024 * 1024; 
    cout << "Enter the size in megabytes: ";
    cin >> megabytes;
    bits = megabytes * bitsPerMegabyte;
    cout << megabytes << " MB is equal to " << bits << " bits" << endl;
     return 0;
}

