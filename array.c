#include <stdio.h>

int main()
{
    int arr[] = {20, 21, 22};

    printf("%d\n", arr[1]);

    printf("size of%lu", sizeof(arr));
    // ~ why was the anser is 12; cause of it return the size of a type in bytes. so number take 4 bytes.

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("\n%d\n", length); // * total elements inside array



    // ~ MULTI DIMENSIONAL ARRAY
   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
}