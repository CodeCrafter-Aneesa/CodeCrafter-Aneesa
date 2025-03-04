#include <iostream>
using namespace std;

int main() {
    int n, w, h;
    cout << "Enter the Number of square you can paint: ";
    cin >> n;
    cout << "Enter the width of a single wall (in meters): ";
    cin >> w;
    cout << "Enter the height of single a wall (in meters): ";
    cin >> h;
    int wallarea = w * h; 
    int numwalls = n / wallarea;
    cout << "You can completely paint " << numwalls << " walls before running out of paint." << endl;
    return 0;
}

