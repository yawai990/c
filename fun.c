#include <stdio.h>


// @ void does not have return value;
void myfun(char name[],int age) {
    // printf("my age is %d",age);
    printf("my name is %s", name);
    printf("\tand i am %d", age);
    printf("\nthis is from my function");
}
int main() {
    myfun("thoams",20);
    return 0;
}