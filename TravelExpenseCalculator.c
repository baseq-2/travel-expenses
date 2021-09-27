#include <stdio.h>
#include "travelexpenses.h"


int main()
{
    int days = 0;
    double arrivalTime;
    double departureTime;
    double airfareFee;
    double carRentalFee;
    double privateCarFee;
    double vehicleExpense;
    double parkingFee;
    double taxiFee;
    double registrationFee;
    double spentTotal;              //total expense
    double allowedTotal;            //allowed total
    double totalSaved;              //saved amount
    double totalReimbursement;      //Total Reimbursement if any
    double mealTotal;
    double total;
    double allowedParking;
    double allowedTaxiFee;
    double spentHotelFee;
    double allowedHotelFee;
    double hotelFeeTotal;
    double allowedBreaksfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double breakfast;
    double lunch;
    double dinner;
    double allowedMealTotal;
    double maxParking;
    double maxTaxi;
    double spentMealTotal;
    

    days = setTotalDays();
    departureTime = setDepartureTime();
    arrivalTime = setArrivalTime();

    printf("Totals days spent: %.d\n", days);
    printf("Departure Time is at: %.2lf", departureTime);
    printf("\nArrival time is at: %.2lf", arrivalTime);

    airfareFee = setRoundAirfare();
    printf("Round Trip airfare fee: $%.2lf", airfareFee);

    carRentalFee = setCarRentalFees();
    printf("\nCar Rental fees: $%.2lf\n", carRentalFee);
    
    parkingFee = setParkingFees(days, &totalReimbursement);
    printf("\nParking fee: $%.2lf", parkingFee);
    
    int parkingDays = days;
    allowedParking = maxExpensesParking(days);
    printf("\nThe max parking provided by the company is: $%.2lf\n", allowedParking);
    
    taxiFee = setTaxiFees(days, &totalReimbursement);
    printf("Taxi Fee: $%.2lf", taxiFee);
    
    int taxiDays = days;
    allowedTaxiFee = maxExpensesTaxi(days);
    printf("\nThe max taxi fee's provided by the company is: $%.2lf\n", allowedTaxiFee);

    vehicleExpense = drivingExpense ();
    printf("\nTotal expense for driving private vehicle: $%.2lf\n", vehicleExpense);

    registrationFee = setRegistrationFees();
    printf("\nTotal seminar and registration fee: $%.2lf\n", registrationFee);

    spentHotelFee = setHotelFees(days, &totalReimbursement);
    printf("\nTotal hotel fee: $%.2lf\n\n", spentHotelFee);

    spentMealTotal = setMealFees(days, &totalReimbursement, arrivalTime, departureTime);
    printf("\nTotal meal fee: $%.2lf\n\n", spentMealTotal);

    maxTaxi  = maxExpensesTaxi(days);
    maxParking = maxExpensesParking(days);
    
    allowedTotal = airfareFee + carRentalFee + maxParking + maxTaxi + vehicleExpense + registrationFee + allowedHotelFee + allowedMealTotal;
    spentTotal   = airfareFee + carRentalFee + parkingFee + taxiFee + vehicleExpense + registrationFee + spentHotelFee   + spentMealTotal;

    if ( spentTotal <= allowedTotal )
    {
        totalSaved = allowedTotal - spentTotal;
    }

    
    char fullname[50];
    
    printf("---Travel Expenses Report--- \n");
    printf("Name: ");
    scanf("%s", fullname);
    printf("Total days of the trip: %d\n", days);
    printf("Total expenses: $" "%.2lf\n" ,spentTotal ); 
    printf("Total allowable expenses: $" "%.2lf\n", allowedTotal); 
    printf("Total reimbursement: $" "%.2lf\n", totalReimbursement);
    printf("Total amount saved in this trip: $" "%.2lf\n", totalSaved);


    return 0;
}
