#include<iostream>
#include<windows.h>
using namespace std;
void tpChecker(int, int);
main()
{
int rolls,people;
cout<<"Number of Roll";
cin>>rolls;
cout<<"Number of people";
cin>>people;
tpChecker(rolls, people);
}
void tpChecker(int rolls,int people)
{
int sheets,use;
sheets=rolls*500;
use=sheets/(people*57);
if(use<=14)
cout<<"Your TP will last in "<<use <<" Days. Buy More";
else
cout<<"Your TP will last in "<<use <<" Days. No need to buy";
}