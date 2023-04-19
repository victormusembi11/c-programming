/*
    pointers
    ========

    - variable names which hold memory locations of another variable.
*/

#include <stdio.h>

int main ()
{
    int a = 5;
    int *b = &a;

    printf("Value in a = %d\n", a);
    // printf("Address of a = %d\n", b);
    printf("Value in address a = %d", *b);

    return 0;

}