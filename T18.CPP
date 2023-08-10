#include<iostream.h>
#include<conio.h>
class temp
{
	public:
		float f;
		float getdata()
		{
			cout << "Enter the temp in fehrenhit::";
			cin >> f;
		}
		float putdata()
		{
			float ans;
			ans=(f-32) * 1.8;
			return ans;
		}
};
int main()
{
	 clrscr();
	 temp c;
	 c.getdata();
	 cout<<c.putdata();
	 getch();
}