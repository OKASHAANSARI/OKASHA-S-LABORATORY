#include<iostream>
using namespace std;
int main()
{
	int n1,n2,swap;
	int *p1;
	int *p2;
	cout<<"Enter The First Number"<<endl;
	cin>>n1;
	cout<<"Enter The Second Number"<<endl;
	cin>>n2;
	p1=&n1;
	p2=&n2;
	swap=*p1;
	*p1=*p2;
	*p2=swap;
	
	cout<<"After Swapping"<<endl;
	cout<<"First Number"<<endl;
	cout<<"Second Number";
	return 0;
}
