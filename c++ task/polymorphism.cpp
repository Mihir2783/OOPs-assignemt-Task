#include<stdio.h>
#include<iostream>
using namespace std;
class demo
{
	public : void get()
	{
		cout<<"hello";
		
	}
	public : void get(int x)
	{
		cout<<x;
	}
	public : void get(float a,float b)
	{
		cout<<a;
	}
};
main()
{
	demo obj;
	obj.get();
	cout<<endl;
	obj.get(10);
	cout<<endl;
	obj.get(10.32,10.33);
}