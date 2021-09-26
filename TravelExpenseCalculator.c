#include <stdio.h>

double setTotalDays(double days)
{
    printf("How many days were spent on the trip?\n");
    scanf("%lf", &days);
    while ( days < 1 )
    {
        printf("Please enter a number greater than 1\n");
        scanf("%lf", &days);
    }
    printf("Totals days spent:%.2lf", days);
    return days;
}

