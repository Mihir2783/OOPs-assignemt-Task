#include<stdio.h>
#include<iostream>
using namespace std;
class demo
{
	int x;
	public : demo(int a)
	{
		x = a;
		
	}
	void print()
	{
		cout<<x;
	}
};
main()
{

	demo obj(10);
	
	obj.print();
	
}