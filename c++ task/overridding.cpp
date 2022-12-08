#include<stdio.h>
#include<iostream>
using namespace std;
class demo
{
	public : void get()
	{
		cout<<"hello";
	}
};
class abc
{
	public : void get()
	{
		cout<<"world";
	}
};
main()
{
	demo obj;
	abc obj1;
	obj.get();
	obj1.get();
}