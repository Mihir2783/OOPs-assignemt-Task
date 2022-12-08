#include<stdio.h>
#include<iostream>
using namespace std;
class demo
{
	int id;
	char c[30];
	public : void getdata();
	public : void putdata();
	
};
void demo :: getdata()
{
	cout<<"enter id";
	cin>>id;
	cout<<"enter name";
	cin>>c;
}
void demo :: putdata()
{
	cout<<id<<endl<<c;
}
main()
{
	demo obj;
	obj.getdata();
	obj.putdata();
}