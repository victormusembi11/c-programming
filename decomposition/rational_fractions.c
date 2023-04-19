#include <stdio.h>

void partial_fraction(int x)
{
    float A = 2.0 / (x + 2);
    float B = 1.0 / (x - 1);
    printf("3x/((x+2)(x-1)) = %.2f/(x+2) + %.2f/(x-1)\n", A, B);
}

int main()
{
    int x = 2; // example value for x
    partial_fraction(x);
    return 0;
}
