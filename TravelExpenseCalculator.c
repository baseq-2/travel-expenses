#include <stdio.h>
#include "travelexpenses.h"

<<<<<<< HEAD
double setCarRentalFee(){

    double carR;
    printf("Enter the amount of any car rentals (0 if there is none): ");
    scanf("%lf", &carR);
    while(carR < 0.0){
        printf("Negative is not accepted for car rental.\nPlease enter again: ");
        scanf("%lf", &carR);
    }
    return carR;
};

double setParkingFees(int days, double *totalReimbursement ){
    double park = 0.0;
    double tempP;
    double exceed = 0.0;


    for (int i = 1; i <= days; i++){
        printf("Enter the amount of parking fee for day%d (0 if there is none): ", i);
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
};

double setTaxiFees(int days, double *totalReimbursement){
    double taxi = 0.0;
    double tempT;
    double exceed = 0.0;


    for (int i = 1; i <= days; i++){
        printf("Enter the amount of parking fee for day%d (0 if there is none): ", i);
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
};

double drivingExpense(double miles){
    double drivingCost = miles * 0.27;
    return drivingCost;
};

double maxExpensesParking(int parkingDays){
    double maxParking = parkingDays * 6.00;
    return maxParking;
};

double maxExpensesTaxi(int taxiDays){
    double maxTaxi = taxiDays * 10.0;
    return maxTaxi;
};

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

    spentHotelFee = setHotelFees(spentHotelFee);
    printf("\nTotal hotel fee: $%.2lf", spentHotelFee);

    spentMealTotal = setMealFee(spentMealTotal);
    printf("\nTotal meal fee: $%.2lf", spentMealTotal);

    maxTaxi  = maxExpensesTaxi(days);
    maxParking = maxExpensesParking(days);

    allowedBreaksfastFee = 9*days;
    allowedLunchFee = 12*days;
    allowedDinnerFee = 16*days;
    allowedMealTotal = allowedBreaksfastFee + allowedLunchFee + allowedDinnerFee;

    spentMealTotal = breakfast + lunch + dinner;
    
    if (breakfast >= allowedBreaksfastFee)
    {
        totalReimbursement += (breakfast - allowedBreaksfastFee);
    }
    if (lunch >= allowedLunchFee)
    {
        totalReimbursement += (lunch - allowedLunchFee);
    }
    if (dinner >= allowedDinnerFee)
    {
        totalReimbursement += (dinner - allowedDinnerFee);
    }

    allowedTotal = airfareFee + carRentalFee + maxParking + maxTaxi + drivingCost + registrationFee + allowedHotelFee + allowedMealTotal;
    spentTotal   = airfareFee + carRentalFee + parkingFee + taxiFee + drivingCost + registrationFee + spentHotelFee   + spentMealTotal;

    spentMealTotal = &breakfast + &lunch + &dinner;

    &totalReimbursement += (spentMealTotal - allowedMealTotal)
    setMealFee(allowedMealTotal, spentMealTotal);


    if ( spentTotal <= allowedTotal )
    {
        totalSaved = allowedTotal - spentTotal;
    }

    
    char fullname[50];
    
    printf("---Travel Expenses Report--- \n");
    printf("Name: \n");
    scanf("%c", fullname);
    printf("Total days of the trip: %d\n", days);
    printf("Total expenses: $" "%lf\n" ,spentTotal ); 
    printf("Total allowable expenses: $" "%lf\n", allowedTotal); 
    printf("Total reimbursement: $" "%lf\n", totalReimbursement);
    printf("Total amount saved in this trip: $" "%lf\n", totalSaved);


    return;
}
>>>>>>> 018af257f11a12353f63879739eed4cbb58b66fe
