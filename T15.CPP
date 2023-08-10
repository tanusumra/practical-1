#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int base,exp;
	clrscr();
	cout<<"Enter base and expone::"<<endl;
	cin>>base>>exp;
	cout<<base<<"^"<<exp<<"="<<pow(base,exp);
	getch();
}