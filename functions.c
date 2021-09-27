#include <stdio.h>
#include "travelexpenses.h"

//by: Noe Rivera
int setTotalDays()
{
    int days;
    printf("How many days were spent on the trip including departure and arrival?\n");
    scanf("%d", &days);
    while ( days < 1 )
    {
        printf("Please enter a number greater than or equal to 1\n");
        scanf("%d", &days);
    }
    return days;
}

//by: Noe Rivera
double setDepartureTime()
{
    double departureTime;
    printf("\nWhat is the departure time for the trip?(using 24 hour time 00.00)\n");
    scanf("%lf", &departureTime);
    while ( (departureTime < 0 || departureTime > 23.59) || (departureTime-(int) departureTime > (double)0.59) )
    {
        printf ("\nERROR: please enter valid time between 00.00 - 23.59\n");
        scanf("%lf",&departureTime);
    }
    return departureTime;
}

//by: Noe Rivera
double setArrivalTime()
{
    double arrivalTime;
    printf("\nWhat is the arrival time for the trip?(using 24 hour time 00.00)\n");
    scanf("%lf", &arrivalTime);
    while ( (arrivalTime < 0 || arrivalTime > 23.59) || (arrivalTime-(int) arrivalTime > (double)0.59) )
    {
        printf("\nERROR: enter a valid number between 00.00-23.59\n");
        scanf("%lf", &arrivalTime);
    }
    return arrivalTime;
}

//by: Noe Rivera
double setRoundAirfare(double airfareFee)
{
    printf("\nWhat was the total cost of the Round-Trip Air Fare?\n");
    scanf("%lf", &airfareFee);
    while (airfareFee < 0)
    {
        printf("ERROR: Please enter a non-negative number.\n");
        scanf("%lf", &airfareFee);
    }
    return airfareFee;
}

//by: Huijun 
double setCarRentalFees(double carRentalFee)
{
    printf("\nEnter the amount of any car rentals (0 if there is none): ");
    scanf("%lf", &carRentalFee);
    while(carRentalFee < 0.0)
    {
        printf("\nNegative is not accepted for car rental.\nPlease enter again: ");
        scanf("%lf", &carRentalFee);
    }
    return carRentalFee;
}

//by: Huijun
double setParkingFees(int days, double *totalReimbursement )
{
    double park = 0.0;
    double tempP;
    double exceed = 0.0;


    for (int i = 1; i <= days; i++){
        printf("Enter the amount of parking fee for day %d (0 if there is none): ", i);
        scanf("%lf", &tempP);
        while(tempP < 0.0){
            printf("Negative is not accepted for parking fee.\nPlease enter again: ");
            scanf("%lf", &tempP);
        }
        park += tempP;
        if (tempP > 6.00){
            exceed += (tempP - 6.00);
            *totalReimbursement = *totalReimbursement + exceed;
        }
        
    }
    
    return park;
}

//by: Huijun
double maxExpensesParking(int parkingDays){
    double maxParking = parkingDays * 6.00;
    return maxParking;
}

//by: Huijun
double setTaxiFees(int days, double *totalReimbursement ){
    double taxi = 0.0;
    double tempT;
    double exceed = 0.0;


    for (int i = 1; i <= days; i++){
        printf("Enter the amount of taxi fee for day %d (0 if there is none): ", i);
        scanf("%lf", &tempT);
        while(tempT < 0.0){
            printf("Negative is not accepted for taxi fee.\nPlease enter again: ");
            scanf("%lf", &tempT);
        }
        taxi += tempT;
        if (tempT > 10.00){
            exceed += (tempT - 10.00);
            *totalReimbursement = *totalReimbursement + exceed;
        }
        
    }
    
    return taxi;
}

//by: Huijun
double maxExpensesTaxi(int taxiDays){
    double maxTaxi = taxiDays * 10.0;
    return maxTaxi;
}

//by:Huijun
double drivingExpense(double vechileExpense)
{
    double miles;
    printf("\nWere any miles driven in a private vehicle? ");
    scanf("%lf", &miles);
    double drivingCost = miles * 0.27;
    return drivingCost;
}

//By: Ben Le
double setRegistrationFees()
{   
    double registrationFee;
    printf("What are the conference or seminar registration fees? ");
    scanf("%lf", &registrationFee);

    while (registrationFee <0)
    {
        printf("Please enter a positive number!");
        scanf("%d", registrationFee);
    }
    return registrationFee;

}

//By: Ben Le
double setHotelFees(int totalDays, double *totalReimbursement)
{
    double dayFee;
    double totalCost = 0.0;
    for (int day=1; day<=totalDays; day++)
    {
        printf("How much did the hotel cost you on night %d?\n", day);
        scanf("%lf", &dayFee);
        while (dayFee <0)
        {
            printf("Please enter a positive number!");
            scanf("%lf", &dayFee);
        }
        totalCost += dayFee;
        if(dayFee > 90)
        {
            *totalReimbursement += dayFee - 90;
        }
    }   
    return totalCost;

}

//By: Ben Le
double maxExpensesHotel(int totalDays)
{
    return totalDays * 90;
}

double mealFee(char mealType, int day, double *totalReimbursement)
{
    double cost;
    switch (mealType)
    {
        case 'b':
            printf("How much did breakfast cost on day %d? ", day);
            scanf("%lf", &cost);
            while(cost < 0.0)
            {
                printf("Please enter a non-negative cost: ");
                scanf("%lf", &cost);
            }
            if(cost > 9.0)
            {
                *totalReimbursement += cost-9.0;
            }
            return cost;
        case 'l':
            printf("How much did lunch cost on day %d? ", day);
            scanf("%lf", &cost);
            while(cost < 0.0)
            {
                printf("Please enter a non-negative cost: ");
                scanf("%lf", &cost);
            }
            if(cost > 12.0)
            {
                *totalReimbursement += cost-12.0;
            }
            return cost;
        case 'd':
            printf("How much did dinner cost on day %d? ", day);
            scanf("%lf", &cost);
            while(cost < 0.0)
            {
                printf("Please enter a non-negative cost: ");
                scanf("%lf", &cost);
            }
            if(cost > 16.0)
            {
                *totalReimbursement += cost-16.0;
            }
            return cost;
        default:
            return 0.0;
    }
}

//By: Ben Le
double setMealFees(int totalDays, double *totalReimbursement, double arrivalTime, double departureTime)
{
    double breakfast;
    double lunch;
    double dinner;
    double totalCost = 0.0;
    
    for (int day = 1; day <= totalDays; day++ )
    {
        if(day == 1 || day == totalDays)
        {
            if(day == 1)
            {
                if(arrivalTime < 18.0)
                {
                    totalCost+=mealFee('d', day, totalReimbursement);
                    if(arrivalTime < 12.0)
                    {
                        totalCost+=mealFee('l', day, totalReimbursement);
                        if(arrivalTime < 7.0)
                        {
                            totalCost+=mealFee('b', day, totalReimbursement);
                        } 
                    }
                }
            }
            else
            {
                if(arrivalTime > 8.0)
                {
                    totalCost+=mealFee('b', day, totalReimbursement);
                    if(arrivalTime > 13.0)
                    {
                        totalCost+=mealFee('l', day, totalReimbursement);
                        if(arrivalTime > 19.0)
                        {
                            totalCost+=mealFee('d', day, totalReimbursement);
                        } 
                    }
                } 
            }
        }
        else
        {
            totalCost+=mealFee('b', day, totalReimbursement);
            totalCost+=mealFee('l', day, totalReimbursement);
            totalCost+=mealFee('d', day, totalReimbursement);
        }
    }
    return totalCost;
}



//By: Ben Le

double maxExpensesMeal(int totalDays, double arrivalTime, double departureTime)
{
    double maxAllowedMealsCost = 0.0;
    if(departureTime > 7.0)
    {
        maxAllowedMealsCost += 6;
    }
    if(departureTime > 12.0)
    {
        maxAllowedMealsCost += 12;
    }
    if(departureTime > 18.0)
    {
        maxAllowedMealsCost += 16;
    }
    if(arrivalTime > 7.0)
    {
        maxAllowedMealsCost += 6;
    }
    if(arrivalTime > 12.0)
    {
        maxAllowedMealsCost += 12;
    }
    if(arrivalTime > 18.0)
    {
        maxAllowedMealsCost += 16;
    }
    if(totalDays > 2)
    {
        maxAllowedMealsCost += (totalDays-2) * 34;
    }
    return maxAllowedMealsCost;
}