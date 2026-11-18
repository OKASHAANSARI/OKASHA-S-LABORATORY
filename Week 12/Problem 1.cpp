
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    float marks;

public:
    // Default constructor
    Student()
    {
        rollNo = 101;
        marks = 85.5;
    }

    // Member function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.display();

    return 0;
}

