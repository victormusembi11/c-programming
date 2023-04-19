#include <stdio.h>

int main()
{
    char names[5][50] = {
        "John",
        "Luke",
        "Rooney",
        "Ronaldo",
        "Victor"};
    char adm_nums[5][10] = {"22-4066", "23-5214", "22-3055", "23-7077", "20-0978"};
    int i;

    printf("Names\t\tAdmission Numbers\n");
    printf("-----\t\t-----------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\t\t%s\n", names[i], adm_nums[i]);
    }

    return 0;
}
