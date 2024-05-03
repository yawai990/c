#include <iostream>
using namespace std;

class Car
{
public:
    int year;
    string brand;
    string model;
    Car(int x, string y, string z)
    {
        year = x;
        brand = y;
        model = z;
    }
};

int main()
{
    Car carOne(2019, "toyota", "alphard");
    cout << carOne.brand << " " << carOne.year << carOne.model << "\n";
    return 0;
}
