#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();

	cout<<"Enter a::";
	cin>>a;
	cout<<"Enter b::";
	cin>>b;

	temp=a;
	a=b;
	b=temp;

	cout<<"a is::"<<a<<endl;
	cout<<"b is::"<<b<<endl;
	getch();
}