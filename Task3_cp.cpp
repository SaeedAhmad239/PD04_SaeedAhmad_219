#include<iostream>
#include<windows.h>
using namespace std;
void discount(string name, int price)
{
int disc;
if(name=="Pakistan")
disc= price-((5*price)/100);
else if(name=="Irland")
disc= price-((10*price)/100);
else if(name=="India")
disc= price-((20*price)/100);
else if(name=="England")
disc= price-((30*price)/100);
else if(name=="Caneda")
disc= price-((45*price)/100);
cout<<"Final ticket price after discount " <<disc <<"$";
}
int main()
{
int p;
string n;
cout<<"Enter country name";
cin>>n;
cout<<"Enter ticket price in dollars";
cin>>p;
discount(n,p);
return 0;
}
