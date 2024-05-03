### Classess And Objects

```cpp
    #include <iostream>

    using namespace std;
    class MyClass {       // The class
    public:             // Access specifier
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)
    };

    int main() {
        MyClass classOne; // ~ creating an object
        classOne.myNum = 14;

        cout << classOne.myNum;

        return 0;
    }
```

### Class Methods

    Methods is a kind of functions that belongs to the class.There are two types of method.
        1. Inside Class Definition
        2. Outside Class Definition

### Inside Class Definition

```cpp
#include <iostream>
using namespace std;
    class Car{
        public:
            void myMethod1() {
                cout << "hello inside class";
            }
    };

    int main() {
        Car carOne;

        carOne.myMethod1();
        return 0;
    }
```

### Outside Class Definition

    To create a outside class , we have to declare it inside representative class.

```cpp
#include <iostream>
using namespace std;
    class Car{
        public:
            void myMethod1();
    };

void Card::myMethod1()  {
                cout << "hello outside class";
            }
    int main() {
        Car carOne;

        carOne.myMethod1();
        return 0;
    }
```

### Constructors

Constructors look like a blueprints for the class. For example, if we create a **_Car_** class, we can imagine the shape of the car. A car must have a wheel , steering, engine, car modal, brand, year & etc...

```cpp
#include <iostream>
using namespace std;

class Car{
    public:
        int year;
        string brand;
        string model;
        Car(int x,string y, string z){
            year = year;
            brand = brand;
            model = model;
        }
};

int main() {
    Car carOne(2019,"toyota","alphard");
    cout << carOne.brand << "\n";
    cout << carOne.year << "\n";
    cout << carOne.model << "\n";
        return 0;
}
```

### Access Specifiers

    In c++, there are three access specifiers which are
        1. public
            - can access ouside of the class
        2. private
            - can only access inside the class
        3. protected
            -can only access insdie the class , and can access in inherited class.


### Encapsulation
    It is a kind of data hidden. To achieve it , we must declare the class variables or attributes as a private which are not accessed from the outside of the class. If we want to give a permission to read and write the private member outside of the class , we can use get(getter) and set(setter) methods.


```cpp
#include <iostream>
using namespace std;

class Person {
    private:
        int bankAccNo;
    public:
        int getBanAccNo() {
            return bankAccNo;
        }
        void setBanAccNo(int accNo){
            bankAccNo = accNo;
        }
};

int main() {
    Person thomas;

    thomas.setBanAccNo(1234);

    cout << thomas.getBanAccNo();

    return 0;
}
```
`   By using encapsulation, we can control our data more efficiently cause of we can change one parts of our code without affecting other parts. And it increased our data's security.
`

### Inheritance

 We can inherit attributes and methods from one class to another. To perform inheriting , we should have at least two class, one is derived class(child class) and another is base class which is called parent class.


 ```cpp
#include <iostream>
using namespace std;

class Vehicle {
    public:
        string brand;
        void honk(string n, string s){
            cout << "paw paw";
        }
};

class Car: public Vehicle {
    public:
        string model = "BMW";
};

int main() {
    Car carone;
    carone.honk();

    return 0;
}
 ```