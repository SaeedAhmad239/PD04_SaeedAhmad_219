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
system("cls");
cout<<"############################"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"#                          #"<<endl;
cout<<"############################"<<endl;
gotoxy(3,3);
cout<<"P";
}