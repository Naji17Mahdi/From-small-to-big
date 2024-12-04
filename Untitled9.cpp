#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int a , b;
	
	cout<<"Please enter the first number:"<<endl;
	cin>>a;
	cout<<"Please enter the second number:"<<endl;
	cin>>b;
	
	if ( a >= b )
	{
		cout<<b<<'\t'<<'\t'<<a;
	}
	else
	{
		cout<<a<<'\t'<<'\t'<<b;
	}
}
