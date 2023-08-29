#include <limits.h>
#include <stdio.h>

int main () {
    int a = INT_MAX;
    printf("max val of int is: %d\n", a);
    printf("adding one to it: \n");
    a=a+1;
    printf("overflowed int: %d\n", a);
    return 0;
    
}
