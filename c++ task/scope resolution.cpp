#include<iostream>
#include<conio.h>
using namespace std;
int a=10; // global variable
main()
{
	int a=5;
	cout<<"global variable"<<::a<<endl;
	cout<<"local variable"<<a;
}