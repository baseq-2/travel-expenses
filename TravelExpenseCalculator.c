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
    double vechileExpense;
    double parkingFee;
    double taxiFee;
    double registrationFee;
    double spentTotal;      //Overall total cost
    double allowedTotal;    //overall allowed cost
    double totalSaved;      //Overall saved amount
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

    allowedBreaksfastFee = 9*days;
    allowedLunchFee = 12*days;
    allowedDinnerFee = 16*days;
    allowedMealTotal = allowedBreaksfastFee + allowedLunchFee + allowedDinnerFee;
    spentMealTotal = &breakfast + &lunch + &dinner;
    
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