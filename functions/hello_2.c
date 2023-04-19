/*
    passing args by address or reference
*/

#include <stdio.h>

void sum(int *x, int *y)
{
    int z = *x + *y;
    printf("The sum = %d\n", z);
}

int main()
{
    int a, b;

    printf("Enter any two values:\n");
    scanf("%d%d", &a, &b);

    sum(&a, &b);

    return 0;
}