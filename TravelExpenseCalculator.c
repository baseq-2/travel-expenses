#include <stdio.h>

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

double setParkingFees(){
    double park;
    printf("Enter the amount of total parking fee (0 if there is none): ");
    scanf("%lf", &park);
    while(park < 0.0){
        printf("Negative is not accepted for parking fee.\nPlease enter again: ");
        scanf("%lf", &park);
    }
    return park;
};

double setTaxiFees(){
    double taxi;
    printf("Enter the amount of total taxi fee  (0 if there is none): ");
    scanf("%lf", &taxi);
    while(taxi < 0.0){
        printf("Negative is not accepted for taxi fee.\nPlease enter again: ");
        scanf("%lf", &taxi);
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

