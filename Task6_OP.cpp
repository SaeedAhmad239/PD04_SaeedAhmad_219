#include<iostream>
#include<windows.h>
using namespace std;
void s();
void a();
void h();
void n();
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
h();
a();
s();
s();
a();
n();

}
void s()
{
cout<<" ######"<<endl;
cout<<"#      #"<<endl;
cout<<"#"<<endl;
cout<<" ######"<<endl;
cout<<"       #"<<endl;
cout<<"#      #"<<endl;
cout<<" ######\n"<<endl;


}
void a()
{
cout<<"   #"<<endl;
cout<<"  # #"<<endl;
cout<<" #   #"<<endl;
cout<<"#######"<<endl;
cout<<"#     #"<<endl;
cout<<"#     #"<<endl;
cout<<"#     #\n"<<endl;
}

void h()
{
cout<<"#     #"<<endl;
cout<<"#     #"<<endl;
cout<<"#     #"<<endl;
cout<<"#######"<<endl;
cout<<"#     #"<<endl;
cout<<"#     #"<<endl;
cout<<"#     #\n"<<endl;
}

void n()
{
cout<<"#      #"<<endl;
cout<<"# #    #"<<endl;
cout<<"#  #   #"<<endl;
cout<<"#   #  #"<<endl;
cout<<"#    # #"<<endl;
cout<<"#     ##\n"<<endl;
}















