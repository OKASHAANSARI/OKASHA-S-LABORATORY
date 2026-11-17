#include <iostream>
#include <string>
using namespace std;

class Flight
{
    int flight_no;
    string source;
    string destination;
    float fare;

public:
    void setData(int flight_no, string source,
                 string destination, float fare)
    {
        this->flight_no = flight_no;
        this->source = source;
        this->destination = destination;
        this->fare = fare;
    }

    void display()
    {
        cout << "\nFlight Information\n";
        cout << "------------------------\n";
        cout << "Flight Number : " << this->flight_no << endl;
        cout << "Source        : " << this->source << endl;
        cout << "Destination   : " << this->destination << endl;
        cout << "Fare          : " << this->fare << endl;
    }
};

int main()
{
    Flight f;

    f.setData(1234, "Delhi", "Mumbai", 4500);

    f.display();

    return 0;
}

