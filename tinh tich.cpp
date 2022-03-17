#include<iostream> 
using namespace std ;
main() 
{
	int n,P=1 ;
	cout<<" nhap n ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		P=P*2*i ;
	 } 
	 cout<< " tich = "<<P <<endl;
}
