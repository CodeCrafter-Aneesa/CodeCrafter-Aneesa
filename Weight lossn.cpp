#include <iostream>
using namespace std;
int main() 
{
	int fertilizerbaginpounds;
	float costofthebag,fertilizerperpound;
	float areainsquarefeet,fertilizingpersquarefeet;
	cout<<"Enter the fertilizer bag in pounds:";
	cin>> fertilizerbaginpounds;
	cout<<"Enter the cost of the bag:";
	cin>> costofthebag;
	cout<<"Enter the area in square feet that can be covered by the bag:";
	cin>> areainsquarefeet;
	fertilizerperpound=costofthebag/fertilizerbaginpounds;
	fertilizingpersquarefeet=areainsquarefeet*costofthebag;
	cout<<"fertilizerperpound="<<"$"<<fertilizerperpound<<endl;
	cout<<"fertilizingpersquarefeet="<<"$"<<fertilizingpersquarefeet;
	return 0;
}
