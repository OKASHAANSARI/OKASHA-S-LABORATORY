#include<iostream>
using namespace std;
int main()
{
	int n1,n2,sum;
	int *p1;
	
	int *p2;
	p1=&n1;
	p2=&n2;
	cout<<"Enter The First Number"<<endl;
	cin>>n1;
	cout<<"Enter The Second Number"<<endl;
	cin>>n2;

	sum=*p1+*p2;
	cout<<"SUM = "<<sum;
	return 0;
}
