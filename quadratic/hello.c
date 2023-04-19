#include <stdio.h>
#include <math.h>


void func_1 (b, discriminant, i) {
    int val1 = -b + sqrt(discriminant) * i;
    int val2 = -b - sqrt(discriminant) * i;
    printf("%d, %d\n", val1, val2);
}


int main () {

    float a, b, c;
    int i = -1;

    printf("Enter value for a, b & c:\n");
    scanf("%f %f %f", &a, &b, &c);

    float x = (b*b) -4 * a * c;
    float discriminant = sqrt(x);
    printf("discriminant: %f/n", discriminant);

    if (x < 0) {
        func_1(b, discriminant, i);
    }

    float step_2 = (-b - discriminant) / (2 * a);
    float step_3 = (-b + discriminant) / (2 * a);

    printf("value 1: %f\n", step_2);
    printf("value 2: %f\n", step_3);

    return 0;
}
