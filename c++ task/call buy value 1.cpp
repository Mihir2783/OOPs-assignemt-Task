#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
main()
{
	int a = 10;
	int b = 20;
	swap(a,b);
	printf("%d",a);
	printf("%d",b);
	
}