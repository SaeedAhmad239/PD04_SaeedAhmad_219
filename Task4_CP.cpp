#include<iostream>
#include<windows.h>
using namespace std;
void checkspeed(int);
main()
{
int speed;
cout<<"Enter speed";
cin>>speed;
checkspeed(speed);
}
void checkspeed(int speed)
{
if(speed>=100)
cout<<"Halt! YOU WILL BE CHALLENGED";
else
cout<<"Perfect! You’re going good";
}