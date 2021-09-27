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

