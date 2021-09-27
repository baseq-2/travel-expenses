#include <stdio.h>
#include "travelexpenses.h"

<<<<<<< HEAD
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
            printf("Enter the cost of breakfast.")
            scanf("%d", breakfast); 
            printf("Enter the cost of lunch.")
            scanf("%d", lunch); 
            printf("Enter the cost of dinner.")
            scanf("%d", dinner); 
        }
        while (day < 2 && departureTime > 7.01 && departureTime <=12.00)
        {
            printf("Enter the cost of lunch.")
            scanf("%d", lunch); 
            printf("Enter the cost of dinner.")
            scanf("%d", dinner); 
        }
        while (day < 2 && departureTime > 12.01 && departureTime <=18.00)
        {
            printf("Enter the cost of dinner.")
            scanf("%d", dinner); 
        }
        while (day > 1 && day < days )
        {
            printf("Enter the cost of breakfast.")
            scanf("%d", breakfast); 
            printf("Enter the cost of lunch.")
            scanf("%d", lunch); 
            printf("Enter the cost of dinner.")
            scanf("%d", dinner); 

        }
        while (day == days && arrivalTime > 8.00 && arrivalTime <= 13.00)
        {
            printf("Enter the cost of breakfast.")
            scanf("%d", breakfast); 
            printf("Enter the cost of lunch.")
            scanf("%d", lunch); 
            printf("Enter the cost of dinner.")
            scanf("%d", dinner);

        }
        while (day == days && arrivalTime > 13.01 && arrivalTime <= 19.00)
        {
            printf("Enter the cost of lunch.")
            scanf("%d", lunch); 
            printf("Enter the cost of dinner.")
            scanf("%d", dinner); 
        }
        while (day == days && arrivalTime > 19.01)
        {
            printf("Enter the cost of dinner.")
            scanf("%d", dinner); 

        }
        return;
    }

}

double maxExpensesHotel(int days, double &allowedHotelFee, double &spentHotelFee, double &totalReimbursement)
{
    double fee;
    printf("How many nights did you spend on the trip?");
    scanf("%d",night );
    printf("How much did the hotel cost you per night?");
    scanf("%d", fee);
    allowedHotelFee = days * 90; 
    spentHotelFee = days*fee;
    &totalReimbursement += (spentHotelFee - allowedHotelFee);
    

    while (fee <0)
    {
        printf("Please enter a positive number!")
        scanf("%d", fee)
    }
    return  allowedHotelFee, totalReimbursement;
}

double maxExpensesMeal(double arrivalTime, double departureTime)
{
    printf("At what time did you depart for the trip?") ;
    scanf("%d", departureTime);       
    while ( departureTime <0 || departureTime > 23.59)
    {
        printf("Error: Please enter a number between 00.00 and 23.59");
        scanf("%d", departureTime);
    }
    printf("At what time did you arrive for the trip?");
    scanf("%d", arrivalTime);
    while ( arrivalTime <0 || arrivalTime > 23.59)
    {
        printf("Error: Please enter a number between 00.00 and 23.59");
        scanf("%d", arrivalTime);
    }
    return;

}

int main()
{
    int days = 0;
    double arrivalTime;
    double departureTime;

    double &allowedHotelFee;
    double &actualHotelFee;

    double registrationFee;

    double allowedMealTotal; 
    double spentMealTotal;
    double &breakfast;
    double &lunch;
    double &dinner;
    double allowedBreaksfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double &totalReimbursement;

    days = setTotalDays(days);
    registrationFee = setRegistrationFees(registrationFee);
    maxExpensesHotel(&spentHotelFee, &allowedHotelFee, &totalReimbursement);
=======
int main()
{
    int days = 0;
    double arrivalTime;
    double departureTime;
    double airfareFee;
    double carRentalFee;
    double privateCarFee;
    double vechileExpense;
    double parkingFee;
    double taxiFee;
    double registrationFee;
    double spentTotal;              //total expense
    double allowedTotal;            //allowed total
    double totalSaved;              //saved amount
    double &totalReimbursement;     //Total Reimbursement if any
    double mealTotal;
    double total;
    double allowedParking;
    double allowedTaxiFee;
    double hotelFee;
    double nightlyRate;
    double allowedHotelFee;
    double hotelFeeTotal;
    double allowedBreaksfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double &breaksfast;
    double &lunch;
    double &dinner;
    double allowedMealTotal;
    double parkingSpent;
    double taxiSpent;
    double spentMealTotal;
    

    days = setTotalDays(days);
    departureTime = setDepartureTime(departureTime);
    arrivalTime = setArrivalTime(arrivalTime);

    printf("Totals days spent: %.d\n", days);
    printf("Departure Time is at: %.2lf", departureTime);
    printf("\nArrival time is at: %.2lf", arrivalTime);

    airfareFee = setRoundAirfare(airfareFee);
    printf("Round Trip airfare fee: $%.2lf", airfareFee);

    carRentalFee = setCarRentalFees(carRentalFee);
    printf("\nCar Rental fees: $%.2lf\n", carRentalFee);
    
    parkingFee = setParkingFees(parkingFee);
    printf("\nParking fee: $%.2lf", parkingFee);
    
    int parkingDays = days;
    allowedParking = maxExpensesParking(parkingDays);
    printf("\nThe max parking provided by the company is: $%.2lf", allowedParking);
    
    taxiFee = setTaxiFees(taxiFee);
    printf("Taxi Fee: $%.2lf", taxiFee);
    
    int taxiDays = days;
    allowedTaxiFee = maxExpensesTaxi(taxiDays);
    printf("\nThe max taxi fee's provided by the company is: $%.2lf", allowedTaxiFee);

    vechileExpense = drivingExpense (vechileExpense);
    printf("\nTotal expense for driving private vechile: $%.2lf", vechileExpense);

    registrationFee = setRegistrationFees(registrationFee);
    printf("\nTotal seminar and registration fee: $%.2lf", registrationFee);

    spentHotelFee = setHotelFee(spentHotelFee);
    printf("\nTotal hotel fee: $%.2lf", spentHotelFee);

    spentMealTotal = setMealFee(spentMealTotal);
    printf("\nTotal meal fee: $%.2lf", spentMealTotal);

>>>>>>> 6084950a07985733dd0c6800be2d3becdb3b83d9
    allowedBreaksfastFee = 9*days;
    allowedLunchFee = 12*days;
    allowedDinnerFee = 16*days;
    allowedMealTotal = allowedBreaksfastFee + allowedLunchFee + allowedDinnerFee;
    spentMealTotal = &breakfast + &lunch + &dinner;
<<<<<<< HEAD
    &totalReimbursement += (spentMealTotal - allowedMealTotal)
    setMealFee(allowedMealTotal, spentMealTotal);

    char fullname[50];
    

    printf("---Travel Expenses Report--- ")
    printf("Name: ");
    scanf("%c", fullname);
    printf("Total days of the trip: %d\n", days);
    printf("Total expenses: $" "%lf" , ); // add parameter total here
    printf("Total allowable expenses: $" "%lf", ); // add parameter total allowance here
    printf("Total reimbursement: $" "%lf", totalReimbursement);
    printf("Total amount saved in this trip: $" "%lf", ); //add parameter total saved here







}

=======
    
    if (&breakfast >= allowedBreaksfastFee)
    {
        &totalReimbursement += (&breakfast - allowedBreaksfastFee);
    }
    if (&lunch >= allowedLunchFee)
    {
        &totalReimbursement += (&lunch - allowedLunchFee);
    }
    if (&dinner >= allowedDinnerFee)
    {
        &totalReimbursement += (&dinner - allowedDinnerFee);
    }

    allowedTotal = airfareFee + carRentalFee + maxParking + maxTaxi + drivingCost + registrationFee + allowedHotelFee + allowedMealTotal;
    spentTotal   = airfareFee + carRentalFee + parkingFee + taxiFee + drivingCost + registrationFee + spentHotelFee   + spentMealTotal;

    if ( spentTotal <= allowedTotal )
    {
        totalSaved = allowedTotal - spentTotal;
    }

    
    char fullname[50];
    
    printf("---Travel Expenses Report--- \n")
    printf("Name: \n");
    scanf("%c", fullname);
    printf("Total days of the trip: %d\n", days);
    printf("Total expenses: $" "%lf\n" ,spentTotal ); 
    printf("Total allowable expenses: $" "%lf\n", allowedTotal); 
    printf("Total reimbursement: $" "%lf\n", totalReimbursement);
    printf("Total amount saved in this trip: $" "%lf\n", totalSaved);


    return;
}
>>>>>>> 6084950a07985733dd0c6800be2d3becdb3b83d9
