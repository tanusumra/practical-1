#include<iostream.h>
#include<conio.h>
void main()
{
	char op;
	float num1,num2;
	clrscr();
	cout<<"Enter an arithmetic operation(+ - * /)::";
	cin>>op;
	cout<<"Enter two number as operation"<<endl;
	cin>>num1>>num2;
	switch(op)
	{
		case'+':
		{
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		}
		case'-':
		{
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
		}
		case'*':
		{
			cout<<num1<<"*"<<num2<<"="<<num1*num2;
			break;
		}
		case'/':
		{
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
			break;
		}
		default:
		{
			cout<<"error:unsupported operation";
		}
	}
	getch();
}
