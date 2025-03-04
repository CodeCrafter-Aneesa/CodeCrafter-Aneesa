#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, product = 1, subtraction = 0;
    cout << "Enter 15 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> num;
        sum += num;
    }
    for (int i = 0; i < 5; i++) {
        cin >> num;
        product *= num;
   }
    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (i == 0) 
            subtraction = num;  
            subtraction -= num; 
    }
    int final_result = (sum + product) - subtraction;
    cout << "The final result is: " << final_result << endl;
    return 0;
}

