#include<iostream>
using namespace std;
 int main() {
    int wins, draws, losses, points;
     int pointsPerWin = 3;
     int pointsPerDraw = 1;
     int pointsPerLoss = 0;
    cout << "Enter the number of wins: ";
    cin >> wins;
    cout << "Enter the number of draws: ";
    cin >> draws;
    cout << "Enter the number of losses: ";
    cin >> losses;
    points = (wins * pointsPerWin) + (draws * pointsPerDraw) + (losses * pointsPerLoss);
    cout << "Total points obtained: " << points << endl;
    return 0;
}



