#include<iostream>
using namespace std;
int main()
{ int impostercount,playercount;
  int chanceofbeinganimposter;
    cout << "Enter the Imposter count: ";
    cin >> impostercount;     
	cout <<"Enter the Player count:"; 
	cin >> playercount; 
    chanceofbeinganimposter=100*(impostercount/playercount);
    cout << "chanceofbeinganimposter= " << chanceofbeinganimposter << "%" << endl;
    return 0;
}

