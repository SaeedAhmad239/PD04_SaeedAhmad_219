#include<iostream>
#include<windows.h>
using namespace std;
void FlowerShop(int,int,int);
main()
{
int red,tulip,white;
cout<<"Number of red roses: ";
cin>>red;
cout<<"Number of White Roses";
cin>>white;
cout<<"Number of Tulips: ";
cin>>tulip;
FlowerShop(red,white,tulip);
}
void FlowerShop(int r,int w,int t)
{
float total;
total=(r*2)+(w*4.10)+(t*2.50);
if(total>200)
{
float discount;
discount=total-((20*total)/100);
cout<<"Discounted price is "<<discount<<"$";
}
else
cout<<"Total Price is "<<total<<"$";
}