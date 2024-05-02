#include <stdio.h>

int length = 4;
int width = 6;
int area;

int num = 12.12;
float num1 = 12.12;
float num2 = 12.12345678;  // ?  float took 7 decimal place;
double num3 = 12.12345878; // ? double took 6 decimal place, is over it increase 1 to last number which me digit at 6 dec position

// Calculate the area of a rectangle
int main()
{
    area = length * width;
    printf("%d\n", area);
    printf("%f\n", num1);
    printf("%f\n", num2);
    printf("%lf\n", num3);  // * answer => 12.123459 (default)
    // @ decimal precision
    printf("%.1f\n", num3); // Only show 1 digit
    printf("%.2f\n", num3); // Only show 2 digits
    printf("%.8f\n", num3);
    return area;
}

const int PI = 3.142; // this means variable can not reassign.

PI = 4; // this will be the error cause of re-assigning the constant variable;