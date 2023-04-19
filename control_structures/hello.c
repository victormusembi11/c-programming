#include <stdio.h>

int main()
{
    float mark;

    printf("Enter the marks you have obtained in your CAT:\n");
    scanf("%f", &mark);

    if ((mark <= 30) && (mark > 0)) {
        if(mark >= 25){
            printf("You obtained %.2f and have passed\n", mark);
        } else {
            printf("You obtained %.2f and have failed\n", mark);
        }
    } else {
        printf("it's not possible to get more than 30 marks or less than 0\n");
    }

    // if ((mark >= 25) && (mark <= 30)){
    //     printf("You have obtained %2f and have passed", mark);
    // } else {
    //     if (mark < 25){
    //         printf("You have obtained %.2f and have failed", mark);
    //     } else {
    //         printf("Invalid input of %.2f", mark);
    //     }
    // }

    return 0;
}
