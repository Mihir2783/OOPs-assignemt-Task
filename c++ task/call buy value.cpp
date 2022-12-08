#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
main()
{
	int a = 10,b = 20;
	cout<<"original value"<<a<<endl;
	cout<<"original value"<<b<<endl;
	swap(a,b);
	cout<<"swapped value a"<<a<<endl;
	cout<<"swapped value b"<<b<<endl;
}