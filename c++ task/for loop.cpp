#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
	int a;
	int i;
	cout<<"enter a : ";
	cin>>a;
	for(i=0;i<a;i++)
	{
		if(i%2==0)
		{
		cout<<i<<endl;
	    }
	}
}