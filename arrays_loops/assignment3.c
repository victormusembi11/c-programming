#include <stdio.h>
#include <string.h>

int main()
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char month_names[12][10] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"};
    int i;

    printf("Month\tDays\n");
    for (i = 0; i < 12; i++)
    {
        printf("%s\t%d\n", month_names[i], days_in_month[i]);
    }

    return 0;
}
