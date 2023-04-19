#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter any 2 values: \n");
    scanf("%d%d", &a, &b);

    printf("main calls sum.");
    sum(a, b); // passing args by value

    printf("\nfinally");

    return 0;
}

void sum(int x, int y)
{
    x = x + y;
    printf("The sum = %d", x);
}
