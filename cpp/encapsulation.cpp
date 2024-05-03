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
