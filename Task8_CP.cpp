#include<iostream>
#include<windows.h>
using namespace std;
void pet(int);
main()
{
int holidays;
cout<<"Enter holidays";
cin>>holidays;
pet(holidays);
}
void pet(int h)
{
int working_Days,time,sleep_time,play_time,hours,minutes;
working_Days=365-h;
play_time=(working_Days*63)+(h*127);
sleep_time=30000-play_time;
hours=sleep_time/60;
minutes=hours/60;
cout<<""<<hours <<"hours" <<""<<minutes<<"minutes"<<"for play";
}