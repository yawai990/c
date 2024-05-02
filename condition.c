#include <stdio.h>

int main()
{
    int num1 = 20;
    int num2 = 10;

    if (num1 > num2)
    {
        printf("num1 is greater than num2\n");
        // return 0;
    }else if(num1 < num2){
        printf("num1 is not less than num2");
        // return 0;
    } else{
        printf("num1 is equaled num2\n");
        // return 0;
    }

    // @SHORT HAND
    num1 < num2 ? printf("num1 is less than num2\n"):printf("num1 is greater than num2\n");
}