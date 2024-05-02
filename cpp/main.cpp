#include <iostream>
#include <string>

using namespace std;

struct personProps
{
    string name;
    int age;
};

void myfun();

void swapfun(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

void passArrayfun(int arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }
}

int main()
{
    char grade = 'A';
    string parentName = "Thomas";
    string name = "Jhon doe";
    int age = 25;
    double gpa = 1.2;
    bool isMale = true;

    // @CONCATENATION
    string fullname = parentName + " " + name;

    string fullnameA = parentName.append(name);

    string x = "10";
    string y = "10";
    string total = x + y;

    // cout << fullnameA.size() +  fullnameA.length() << endl;

    // @USER INPUT STRING
    // string inptuname;
    // cout << "Enter your name : ";
    // getline(cin,inptuname);
    // cout << "your name is " << inptuname << endl;

    string car[6] = {"mercedes", "ford", "bmw", "audi", "toyata", "suzuki"};

    cout << sizeof(car) / (sizeof(int) * 8);
    // ~ FOR LOOP
    for (int i = 0; i < 6; i++)
    {
        cout << car[i] << "\n";
    }

    // ~ FOR EACH
    int cars[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i : cars)
    {
        cout << i << "\n";
    }

    personProps student;
    student.name = "Jhon Doe";

    cout << student.name << "\n";

    string food = "orange";
    string &fruit = food;

    string *fptr = &food;

    cout << &food << "\n";   // ~ THAT RETURN MEMORY ADDRESS
    cout << &fruit << "\n";  // ~ THAT RETURN MEMORY ADDRESS
    cout << *&fruit << "\n"; // ~ THAT RETURN VALUE
    cout << fptr << "\n";    // ~ THAT RETURN MEMORY ADDRESS
    cout << *fptr << "\n";   // ~ THAT RETURN VALUE CAUSE OF DEREFERENCE

    // @MODIFY POINTER VALUE
    *fptr = "mango";

    cout << fptr << "\n";  // ~ ALTHOUGH WE MODIFY THE POINTER BUT THE MEMORY ADDRESS STILL THE SAME
    cout << *fptr << "\n"; // ~ BUT THE VALUE OF THE POINTER CHANGED BOTH ORIGINAL VALUE AND POINTER VALUE
    myfun();

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap no: \n"
         << firstNum << " " << secondNum << "\n";
    swapfun(firstNum, secondNum);
    cout << "after swap no: \n"
         << firstNum << " " << secondNum << "\n";

    int array[5] = {10, 9, 8, 7, 6};

    passArrayfun(array);
    return 0;
}

void myfun()
{
    cout << "this is my fun"
         << "\n";
}
