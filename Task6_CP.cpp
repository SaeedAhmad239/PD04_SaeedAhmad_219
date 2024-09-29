#include<iostream>
#include<windows.h>
using namespace std;
main()
{
int hour,minute,r;
cout<<"Enter number of minutes";
cin>>minute;
cout<<"Enter number of hours";
cin>>hour;
r=hour*60;
if(r>minute)
cout<<" "<<hour <<" is greater";
else if(minute>r)
cout<<" "<<minute<<" is greater";
else
cout<<"Equal";
}