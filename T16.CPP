#include<iostream.h>
#include<conio.h>
long factorial(int);
void main()
{
	int counter,n;
	clrscr();
	cout<<"Enter the number::";
	cin>>n;
	cout<<"factorial Value is::"<<factorial(n);
	getch();
}
long factorial(int n)
{

	long fact=1;
	for(int counter=1;counter<=n;counter++)
	{
		fact=fact*counter;
	}
}