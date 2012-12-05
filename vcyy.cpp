

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a=100;
	cout<<a<<endl;
	int b=200;
	cout<<b<<endl;

	int c=300;
	cout <<c<<endl;

	int sum_abc=0;
	sum_abc=a+b+c;

	cout<<"sum_abc: "<<sum_abc<<endl;

	cout<<"please input new a: "<<endl;
	cin>>a;
	cout<<"new a"<<a<<endl;
	


	return 0;
}

