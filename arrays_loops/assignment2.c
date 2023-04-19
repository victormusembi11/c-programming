#include <stdio.h>
#include <string.h>

int main()
{
    float rainfall[12];
    float total_rainfall = 0.0, avg_rainfall;
    float max_rainfall = 0.0, min_rainfall = 9999.9;
    int i, max_month, min_month;
    char month_names[12][10] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"};

    for (i = 0; i < 12; i++)
    {
        printf("Enter total rainfall for %s: ", month_names[i]);
        scanf("%f", &rainfall[i]);
        total_rainfall += rainfall[i];

        if (rainfall[i] > max_rainfall)
        {
            max_rainfall = rainfall[i];
            max_month = i;
        }
        if (rainfall[i] < min_rainfall)
        {
            min_rainfall = rainfall[i];
            min_month = i;
        }
    }

    avg_rainfall = total_rainfall / 12.0;
    printf("\nTotal rainfall for the year: %.2f inches\n", total_rainfall);
    printf("Average monthly rainfall: %.2f inches\n", avg_rainfall);
    printf("Month with highest rainfall: %s with %.2f inches\n",
           month_names[max_month], max_rainfall);
    printf("Month with lowest rainfall: %s with %.2f inches\n",
           month_names[min_month], min_rainfall);

    return 0;
}
