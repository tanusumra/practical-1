#include<iostream.h>
#include<conio.h>
void main()
{
	int p,t,r,si;
	clrscr();
	cout<<"Enter the principle amount::";
	cin>>p;
	cout<<"Enter the time of period::";
	cin>>t;
	cout<<"Enter the rate::";
	cin>>r;
	si=(p*t*r)/100;
	cout<<"simple interest is::"<<si;
	getch();
}