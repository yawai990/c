#include <stdio.h>

int main()
{
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", i);
    }

    // @ NESTED LOOP
    int x = 2;
    for (int i = 0; i < x; i++)
    {
        for (int y = 0; y < x; y++)
        {
            printf("%d\n y is", y);
            printf("%d\n x is",x);
        }
    }

    // @ BREAK 

    for (int i = 0; i < x; i++)
    {
        if(i == 1){
            break;
        }
        printf("%d\n break",x);
    }

    //@CONTINUE
     for (int i = 0; i < x; i++)
    {
        if(i == 1){
            continue;;
        }
        printf("%d\n continue",x);
    }
    
}