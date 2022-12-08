#include<stdio.h>
#include<iostream>
using namespace std;
class a
{
	public : void geta()
	{
		cout<<"a";
		
	}
	
};
class b : public a
{
	public : void getb()
	{
		cout<<"b";
		
	}
	
};
class c : public a
{
	public : void getc()
	{
		cout<<"c";
		
	}
	
};
class d : public b , public c
{
	public : void getd()
	{
		cout<<"d";
		
	}
	
};
main()
{
	d obj;
	obj.getb();
	obj.getc();
	obj.getd();
}