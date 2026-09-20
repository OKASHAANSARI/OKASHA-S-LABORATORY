#include <iostream>
using namespace std;
int main ()
{
    int Number1,Number2;
    cout<<"Enter the First number:";
    cin>>Number1;
    cout<<"Enter the second number:";
    cin>>Number2;
 while (Number2 != 0)
    {
        int carryNumber = Number1 & Number2;
        Number1 = Number1 ^ Number2;
        Number2 = carryNumber << 1;
    }
    cout<<"The sum of two numbers is: "<<Number1;
}
