#include<iostream>
using namespace std ; 
main()
{   
int n; 
cout<<" nhap n ";
cin>>n; 
for(int i=0;i<=n;i++)
	{
	for(int j=n-i;j>=1;--j) 
	{
		cout<<"*";

	}
		cout<<"\n";
}
}
