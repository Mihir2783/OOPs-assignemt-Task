#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	public : void get()
	{
		int a,b,c;
		cout<<"enter a : ";
		cin>>a;
		cout<<"enter b : ";
		cin>>b;
		c=a+b;
		cout<<c;
		
	}
};
main()
{
	demo obj;
	obj.get();
}