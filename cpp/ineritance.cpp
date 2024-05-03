#include <iostream>
using namespace std;

class Vehicle {
   public:
       string brand;
       void honk(){
           cout << "paw paw";
       }
};

class Car : public Vehicle {
   public:
       string model = "BMW";
};

int main() {
   Car carone;
   carone.honk();

   return 0;
}