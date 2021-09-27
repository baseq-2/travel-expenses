#include <stdio.h>
#include "travelexpenses.h"

//by: Noe Rivera
int setTotalDays(int days)
{
    printf("How many days were spent on the trip including departure and arrival?\n");
    scanf("%d", &days);
    while ( days < 1 )
    {
        printf("Please enter a number greater than 1\n");
        scanf("%d", &days);
    }
    return days;
}

//by: Noe Rivera
double setDepartureTime(double departureTime)
{
    printf("\nWhat is the departure time for the trip?(using 24 hour time 00.00)\n");
    scanf("%lf", &departureTime);
    while (departureTime < 0 || departureTime > 23.59)
    {
        printf ("\nERROR: please enter valid number between 00.00 - 23.59\n");
        scanf("%lf",&departureTime);
    }
    return departureTime;
}

//by: Noe Rivera
double setArrivalTime(double arrivalTime)
{
    printf("\nWhat is the arrival time for the trip?(using 24 hour time 00.00)\n");
    scanf("%lf", &arrivalTime);
    while (arrivalTime < 0 || arrivalTime > 23.59)
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
        printf("ERROR: Please enter a number greater than 0.");
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
double setParkingFees(double parkingFee)
{
    printf("\nEnter the amount of total parking fee (0 if there is none): ");
    scanf("%lf", &parkingFee);
    while(parkingFee < 0.0)
    {
        printf("Negative is not accepted for parking fee.\nPlease enter again: ");
        scanf("%lf", &parkingFee);
    }
    return parkingFee;
}

//by: Huijun
double maxExpensesParking(int parkingDays){
    double maxParking = parkingDays * 6.00;
    return maxParking;
}

//by: Huijun
double setTaxiFees(double taxiFee){
    printf("\nEnter the amount of total taxi fee  (0 if there is none): ");
    scanf("%lf", &taxiFee);
    while(taxiFee < 0.0){
        printf("\nNegative is not accepted for taxi fee.\nPlease enter again: ");
        scanf("%lf", &taxiFee);
    }
    return taxiFee;
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
double setRegistrationFees(double registrationFee)
{   
    printf("What are the conference or seminar registration fees?");
    scanf("%d", registrationFee);

    while (registrationFee <0)
    {
        printf("Please enter a positive number!")
        scanf("%d", registrationFee);
    }
    return registrationFee;

}

//By: Ben Le
double setHotelFee(double hotelFee, double &spentHotelFee,int &totalReimbursement)
{
    int days;
    printf("How many nights did you spend on the trip?\n");
    scanf("%d",days );
    printf("How much did the hotel cost you per night?\n");
    scanf("%d", hotelFee);

    while (fee <0)
    {
        printf("Please enter a positive number!")
        scanf("%d", hotelFee)
    }
    
    &spentHotelFee = days*hotelFee;

    return &spentHotelFee;

}

//By: Ben Le
double maxExpensesHotel(double &allowedHotelFee, double &spentHotelFee, double &totalReimbursement)
{
    int days;
    &allowedHotelFee = days * 90; 
    &totalReimbursement += (spentHotelFee - allowedHotelFee);

    return  allowedHotelFee, totalReimbursement;

//By: Ben Le
void setMealFee(double allowedMealTotal, double spentMealTotal, double &totalReimbursement)
{
    int day;
    int days;
    double &breakfast;
    double &lunch;
    double &dinner;
    double arrivalTime;
    double departureTime;

    for (day == 1; day <= days; day++ )
    {
        while (day < 2 && departureTime > 00.00 && departureTime<= 7.00))
        {
            printf("Enter the cost of breakfast:\n")
            scanf("%d", &breakfast); 
            printf("Enter the cost of lunch:\n")
            scanf("%d", &lunch); 
            printf("Enter the cost of dinner:\n")
            scanf("%d", &dinner); 
        }
        while (day < 2 && departureTime > 7.01 && departureTime <=12.00)
        {
            printf("Enter the cost of lunch:\n")
            scanf("%d", &lunch); 
            printf("Enter the cost of dinner:\n")
            scanf("%d", &dinner); 
        }
        while (day < 2 && departureTime > 12.01 && departureTime <=18.00)
        {
            printf("Enter the cost of dinner:\n")
            scanf("%d", &dinner); 
        }
        while (day > 1 && day < days )
        {
            printf("Enter the cost of breakfast:\n")
            scanf("%d", &breakfast); 
            printf("Enter the cost of lunch:\n")
            scanf("%d", &lunch); 
            printf("Enter the cost of dinner:\n")
            scanf("%d", &dinner); 

        }
        while (day == days && arrivalTime > 8.00 && arrivalTime <= 13.00)
        {
            printf("Enter the cost of breakfast:\n")
            scanf("%d", &breakfast); 
            printf("Enter the cost of lunch:\n")
            scanf("%d", &lunch); 
            printf("Enter the cost of dinner:\n")
            scanf("%d", &dinner);

        }
        while (day == days && arrivalTime > 13.01 && arrivalTime <= 19.00)
        {
            printf("Enter the cost of lunch:\n")
            scanf("%d", &lunch); 
            printf("Enter the cost of dinner:\n")
            scanf("%d", &dinner); 
        }
        while (day == days && arrivalTime > 19.01)
        {
            printf("Enter the cost of dinner:\n")
            scanf("%d", &dinner); 

        }
        return;
    }

}

//By: Ben Le
}

double maxExpensesMeal(double arrivalTime, double departureTime)
{
    printf("At what time did you depart for the trip on the last day?(using 24 hour time 00.00)\n") ;
    scanf("%d", departureTime);       
    while ( departureTime <0 || departureTime > 23.59)
    {
        printf("Error: Please enter a number between 00.00 and 23.59");
        scanf("%d", departureTime);
    }
    printf("At what time did you arrive for the trip on the first day?(using 24 hour time 00.00)\n");
    scanf("%d", arrivalTime);
    while ( arrivalTime <0 || arrivalTime > 23.59)
    {
        printf("Error: Please enter a number between 00.00 and 23.59");
        scanf("%d", arrivalTime);
    }
    
    return;

}