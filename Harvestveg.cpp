#include <iostream>
using namespace std;
int main()
{
    float vegPrice, fruitPrice;
    int vegKg, fruitKg;
    const float cointoRps = 1.94;
    cout << "Enter vegetable price per kilogram: ";
    cin >> vegPrice;    
    cout << "Enter fruit price per kilogram: ";
    cin >> fruitPrice;
    cout << "Enter total kilograms of vegetables: ";
    cin >> vegKg; 
    cout << "Enter total kilograms of fruits: ";
    cin >> fruitKg;
    float totalEarningsInCoins = (vegPrice * vegKg) + (fruitPrice * fruitKg);
    float totalEarningsInRps = totalEarningsInCoins / cointoRps;
    cout << "Total earnings in Rupees: Rps " << totalEarningsInRps << endl;
   return 0;
}
