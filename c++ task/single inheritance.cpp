#include<stdio.h>
#include<iostream>
using namespace std;
class parent
{
	public : void set()
	{
		cout<<"hello";
	}
};
class child : public parent
{
	public : void get()
	{
		cout<<"second";
		
	}
	
};
main()
{
	child obj;
	obj.set();
	obj.get();
}