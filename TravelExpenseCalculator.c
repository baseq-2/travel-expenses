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

double setDepartureTime(double departureTime)
{
    printf("What is the departure time for the trip?(using 24 hour time 00.00)\n");
    scanf("%lf", &departureTime);
    printf("time: %.2lf", departureTime);
    while (departureTime < 0 || departureTime > 23.59)
    {
        printf ("\nERROR: please enter valid number between 00.00 - 23.59\n");
        scanf("%lf",&departureTime);
    }
    return departureTime;
}

double setArrivalTime(double arrivalTime)
{
    printf("\nWhat is the arrival time for the trip?(using 24 hour time 00.00)\n");
    scanf("%f", &arrivalTime);
    printf("time: %.2lf", arrivalTime);
    while (arrivalTime < 0 || arrivalTime > 23.59)
    {
        printf("\nERROR: enter a valid number between 00.00-23.59\n");
        scanf("%lf", &arrivalTime);
    }
    return arrivalTime;
}