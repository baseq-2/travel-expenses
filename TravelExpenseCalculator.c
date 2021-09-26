#include <stdio.h>

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
    allowedBreaksfastFee = 9*days;
    allowedLunchFee = 12*days;
    allowedDinnerFee = 16*days;
    allowedMealTotal = allowedBreaksfastFee + allowedLunchFee + allowedDinnerFee;
    spentMealTotal = &breakfast + &lunch + &dinner;
    &totalReimbursement += (spentMealTotal - allowedMealTotal)
    setMealFee(allowedMealTotal, spentMealTotal);







}

