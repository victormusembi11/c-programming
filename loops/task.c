#include <stdio.h>

int main()
{

    float salary;
    int work_years;

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    printf("Enter years worked in current job: ");
    scanf("%d", &work_years);

    /*
        Check if salary > 300000 & years worked in company >= 2
        for customer to qualify for loan
    */
    if (salary < 300000 || work_years < 2)
    {
        printf("Customer does not qualify for loan!\n");
    }
    else
    {
        printf("Customer qualifies for loan!\n");
    }

    return 0;
}
