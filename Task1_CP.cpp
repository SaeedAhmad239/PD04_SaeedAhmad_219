#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X =x;
    coordinates.Y =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
int a,b;
cout<<"enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;
if(a==b)
cout<<"True";
else
cout<<"False";
}