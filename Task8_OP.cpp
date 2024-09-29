#include<iostream>
#include<windows.h>
using namespace std;
void PrintMenu();
float Aggregate(float,float,float);
void rollno(string,float,string,float);
main()
{
PrintMenu();
float ag1,ag2;
string name1;
float MatricMarks1, InterMarks1, ECATMarks1;
cout<<"Enter student name";
cin>>name1;
cout<<"Enter marks of Matric";
cin>>MatricMarks1;
cout<<"Enter marks of First Year";
cin>>InterMarks1;
cout<<"Enter ECAT Marks";
cin>>ECATMarks1;
ag1=Aggregate(MatricMarks1, InterMarks1, ECATMarks1);
cout<<"aggregate of first student is "<<ag1<<endl;


string name2;
int MatricMarks2, InterMarks2, ECATMarks2;
cout<<"Enter student name";
cin>>name2;
cout<<"Enter marks of Matric";
cin>>MatricMarks2;
cout<<"Enter marks of First Year";
cin>>InterMarks2;
cout<<"Enter ECAT Marks";
cin>>ECATMarks2;
ag2=Aggregate(MatricMarks2, InterMarks2, ECATMarks2);
cout<<"aggregate of second student is "<<ag2<<endl;
rollno(name1,ECATMarks1,name2,ECATMarks2);
}


void PrintMenu()
{
cout<<"\t\t\tUniversity Admission Management System"<<endl;
}


float Aggregate(float MatricMarks,float InterMarks,float ECATMarks)
{
float ag;
ag=((MatricMarks*30)/1100)+((InterMarks*30)/560)+((ECATMarks*40)/400);
return ag;
}


void rollno(string name1,float ECATMarks1,string name2,float ECATMarks2)
{
if(ECATMarks1>=ECATMarks2)
cout<<""<<name1 <<" has first roll number";
else
cout<<""<<name2 <<" has first roll number";
}