#include<iostream>
#include<windows.h>
using namespace std;
void Not(string);
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X =x;
    coordinates.Y =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
string s;
cout<<"Enter value";
cin>>s;
Not(s);
}
void Not(string s)
{
if(s=="True")
cout<<"False";
else
cout<<"True";
}