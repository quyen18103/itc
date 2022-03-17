#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao thu(1->7) trong tuan: ";
	th:
	cin>>n; 
		if(n<1||n>7)
		{
		cout<<"Nhap lai thu: ";
		 goto th;  
		}else{
			if(n==1) cout<<"1: sunday";
			if(n==2) cout<<"2: Monday";
			if(n==3) cout<<"3: Tuesday";
			if(n==4) cout<<"4: Wednesday";
			if(n==5) cout<<"5: Thursday";
			if(n==6) cout<<"6: Friday";
			if(n==7) cout<<"7: Saturday";
		}
}
