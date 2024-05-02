#include <stdio.h>

int main() {
    int result = sum(8);
    // @ANSWER =>  8 + 7 + 6 + 5 + 4+ 3 + 2 + 1 = 36;
    printf("%d", result);
    return 0;
}

// ~ RECURSION FUNCTION

int sum(int num){
    if(num > 0){
        return num + sum(num -1);
    }else{
        return 0;
    }
}