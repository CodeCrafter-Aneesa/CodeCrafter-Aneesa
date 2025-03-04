#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;  
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {  
        cin >> num;  
        sum += num;  
    }
    cout << "Sum of 5 integers = " << sum << endl;
    return 0;
}

