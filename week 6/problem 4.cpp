#include<iostream>
using namespace std;
int main()
{
	int n=7;
	int *ptr=&n;
	
	(*ptr)++;
	cout<<"After Increment :"<<n<<endl;
	(*ptr)--;
	cout<<"After Decrement :"<<n;
	return 0; 
}
