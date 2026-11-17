#include <iostream>
#include <string>
using namespace std;

class pntr_obj
{
    int roll_no;
    string name;

public:
    void set_data(int roll_no, string name)
    {
        this->roll_no = roll_no;
        this->name = name;
    }

    void print()
    {
        cout << "Object Address: " << this << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(101, "Rahul");
    obj2.set_data(102, "Aman");
    obj3.set_data(103, "Priya");

    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}

