
#include <iostream>
using namespace std;
int main()
{
    int twoPointers, threePointers;
    cout << "Enter the number of 2-pointers scored: ";
    cin >> twoPointers;
    cout << "Enter the number of 3-pointers scored: ";
    cin >> threePointers;
   int totalpoints=(2 * twoPointers) + (3 * threePointers);
    cout << "Total points: " << totalpoints <<endl;
    return 0;
}

