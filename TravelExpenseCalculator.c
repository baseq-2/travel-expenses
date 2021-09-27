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

    maxExpensesHotel

    allowedBreaksfastFee = 9*days;
    allowedLunchFee = 12*days;
    allowedDinnerFee = 16*days;
    allowedMealTotal = allowedBreaksfastFee + allowedLunchFee + allowedDinnerFee;
    spentMealTotal = &breakfast + &lunch + &dinner;
    &totalReimbursement += (spentMealTotal - allowedMealTotal)
    setMealFee(allowedMealTotal, spentMealTotal);

    allowedTotal = airfareFee + carRentalFee + maxParking + maxTaxi +             + registrationFee;
    spentTotal =   airfareFee + carRentalFee + parkingFee + taxiFee + drivingCost + registrationFee;

    
    char fullname[50];
    
    printf("---Travel Expenses Report--- ")
    printf("Name: ");
    scanf("%c", fullname);
    printf("Total days of the trip: %d\n", days);
    printf("Total expenses: $" "%lf" ,spentTotal ); 
    printf("Total allowable expenses: $" "%lf", allowedTotal); 
    printf("Total reimbursement: $" "%lf", totalReimbursement);
    printf("Total amount saved in this trip: $" "%lf", ); //add parameter total saved here


    
}