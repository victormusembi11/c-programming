#include <stdio.h>

int main () {

    int i;

    /*
        Loop to check for odd numbers between 1 - 30,
        if it's odd output the number in the console.
    */
    for (i = 0; i <= 30; i++) {
        if ((i % 2) != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
