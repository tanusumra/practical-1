#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,temp=0;
	clrscr();

	printf("enter no1::");
	scanf("%d",&no1);
	printf("enter no2::");
	scanf("%d",&no2);

	temp=no1;
	no1=no2;
	no2=temp;

	printf("after swapping");
	printf("\nno1 is::%d",no1);
	printf("\nno2 is ::%d",no2);
	getch();
}