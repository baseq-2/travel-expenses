   
#ifndef TRAVELEXPENSES_H
#define TRAVELEXPENSES_H

/**
 * setTotalDays - get user input for total days of trip
 * 
 * @return  total days of trip
 */
int setTotalDays();

/**
 * setArrivalTime - get user input for arrival time on last day of trip
 * 
 * @return  arrival time
 */
double setArrivalTime();

/**
 * setDepatureTime - get user input for departure time on first day of trip
 * 
 * @return  departure time
 */
double setDepartureTime();

/**
 * setRoundAirfare - get user input for total round-trip airfare fees
 * 
 * @return  total round-trip airfare fees
 */
double setRoundAirfare();

/**
 * setCarRentalFee - get user input for total car rental fees
 * 
 * @return  total car rental fees
 */
double setCarRentalFees();

/**
 * setParkingFees - get user input for total parking fees
 * 
 * @param   days                the total days of the trip
 * @param   totalReimbursement  pointer of the total reimbursement the employee needs to cover 
 * @return  total parking fees
 */

double setParkingFees(int days, double *totalReimbursement);

/**
 * setTaxiFees - get user input for taxi fees incurred during the trip
 * 
 * @param   days                the total days of the trip
 * @param   totalReimbursement  pointer of the total reimbursement the employee needs to cover
 * @return  total taxi fees incurred during the trip
 */

double setTaxiFees(int days, double *totalReimbursement);

/**
 * setMealFee - get user input for the meal fees incurred during the trip
 * 
 * @param   days                the total days of the trip
 * @param   totalReimbursement  pointer of the total reimbursement the employee needs to cover
 * @param   arrivalTime         the arrival time of the plane on the last day of the trip
 * @param   departureTime       the departure time of the plan on the first day of the trip
 * @return  total meal fees incurred during the trip
 */

double setMealFees(int days, double *totalReimbursement, double arrivalTime, double departureTime);

/**
 * setHotelFees - get user input for the hotel fees incurred during the trip
 * 
 * @param   days                the total days of the trip
 * @param   totalReimbursement  pointer of the total reimbursement the employee needs to cover
 * @return  total hotel fees incurred during the trip
 */

double setHotelFees(int days, double *totalReimbursement);

/**
 * setRegistrationFees - get user input for total of conference or seminar fees
 * 
 * @return  total of all conference or seminar fees
 */
double setRegistrationFees();

/**
 * drivingExpense - Calculate the cost of miles driven with a private vehicle
 * 
 * @param   miles    the total number of miles driven with a private vehicle 
 * @return  total cost of miles driven
 */
double drivingExpense();

/**
 * maxExpenesesParking - Calculate the maximum allowed expenses for parking fees
 * 
 * @param   parkingDays the total number of days
 * @return  the maximum allowed expense for parking fees
 */ 
double maxExpensesParking(int parkingDays);

/**
 * maxExpensesTaxi - Calculate the maximum allowed expenses for taxis fees
 * 
 * @param   taxiDays  the number of days when a taxi was used
 * @return  the maximum allowed expense for taxi fees 
 */
double maxExpensesTaxi(int taxiDays);

/**
 * maxExpressTaxi - Calculate the maximum allowed expenses for hotel fees
 * 
 * @param   nights  the number of nights spent at a hotel
 * @return  the maximum allowed expense for hotel fees 
 */
double maxExpensesHotel(int nights);

/**
 * maxExpressMeal - Calculate the maximum allowed expenses for meals
 * 
 * @param   arrivalTime     the arrival time of the flight on the first day of the trip
 * @param   departureTime   the departure time of the flight onthe last day of the trip 
 * @return  the maximum allowed expense meals during the trip
 */
double maxExpensesMeal(int totalDays, double arrivalTime, double departureTime);

#endif