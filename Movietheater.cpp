#include <iostream>
using namespace std;
int main() 
{  string moviename;
   float adultticketprice,childticketprice, amountofcharity;
   int adultticketsold,childticketsold;
   cout<<"Enter the movie name:";
   cin>> moviename;
   cout<<"Enter the adult ticket price:" ;
   cin>> adultticketprice;
   cout<<"Enter the child ticket price:" ;
   cin>> childticketprice;
   cout<<"Enter the adult ticket sold:" ;
   cin>> adultticketsold;
   cout<<"Enter the child ticket sold:" ;
   cin>> childticketsold;
   cout<<"Enter the amount of charity:" ;
   cin>> amountofcharity;
   cout<<"movie name"<<moviename<<endl;
  float amountgenratedfromticketsales=adultticketsold+childticketsold;
   cout<<"amountgeneratedfromticketsales="<<"$"<<amountgenratedfromticketsales<<endl;
   float donationtocharity=(amountgenratedfromticketsales * amountofcharity) /100;
   cout<<"donationtoccharity="<<"$"<<donationtocharity<<endl;
   int remainingamountafterdonation=amountgenratedfromticketsales-donationtocharity;
   cout<<"remainingamountafterdonation="<<"$"<<remainingamountafterdonation<<endl;
   return 0;
}
