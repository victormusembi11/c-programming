#include <stdio.h>

int main()
{
    int num_1, num_2;

    printf("Enter any two whole numbers (press enter after inputing your 1st num):\n");
    scanf("%d %d", &num_1, &num_2);

    int sub = num_1 - num_2;
    int mul = num_1 * num_2;

    printf("sub: %d\nmul: %d\n", sub, mul);

    return 0;
}