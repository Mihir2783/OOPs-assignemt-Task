#include<stdio.h>
#include<iostream>
using namespace std;
class a
{
	public : geta()
	{
		cout<<"value of a";
	}
};
class b : public a
{
	public : getb()
	{
		cout<<"value of b";
		
	}
};
class c : public b
{
	public : getc()
	{
		cout<<"value of c";
		
	}
};
main()
{
	c obj;
	obj.geta();
	obj.getb();
	obj.getc();
}