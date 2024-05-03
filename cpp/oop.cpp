#include <iostream>
using namespace std;
class Car
{
public:
    void myMethod1();
};

void Car::myMethod1()
{
    cout << "hello outside class";
};
int main()
{
    Car carOne;

    carOne.myMethod1();
    return 0;
}