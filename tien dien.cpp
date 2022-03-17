#include<iostream>
using namespace std ;
main() 
{
	int a;
	cout<<" nhap so dien ";
	cin>>a;
	if(0<=a&&a<=100) cout<<" don gia "<< a*2000 <<" VND";
	else if( a<=200) cout <<" don gia "<< 100*2000 + (a-100)*2500 <<" VND";
	else if( a<=300 ) cout <<" don gia "<< 100*2000 + 100*2500 +(a-200 )*3000 <<" VND ";
	else if(a>300) cout<<" don gia "<<100*2000 + 100*2500 + 100*3000 +(a-300 )*5000   <<" VND";
}
	 
