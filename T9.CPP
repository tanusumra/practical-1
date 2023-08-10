#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,t,r,ci;
	clrscr();
	cout<<"Enter the principle amount::";
	cin>>p;
	cout<<"Enter the time of period::";
	cin>>t;
	cout<<"Enter the rate::";
	cin>>r;
	ci=p*pow((1+r/100),t)-p;
	cout<<"compound interest is::"<<ci;
	getch();
}