#ifndef TRAVELEXPENSES_H
#define TRAVELEXPENSES_H

/**
 * setTotalDays - get user input for total days of trip
 * 
 * @return  total days of trip
 */
double setTotalDays();

/**
 * setArrivalTime - get user input for arrival time on first day of trip
 * 
 * @return  arrival time
 */
double setArrivalTime();

/**
 * setDepatureTime - get user input for departure time on last day of trip
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
double setCarRentalFee();

/**
 * setParkingFees - get user input for total parking fees
 * 
 * @return  total parking fees
 */
double setParkingFees();

/**
 * setTaxiFees - get user input for total taxi fees
 * 
 * @return  total taxi fees
 */
double setTaxiFees();

/**
 * setCarRentalFees - get user input for total car rental fees
 * 
 * @return  total car rental fees
 */
double setCarRentalFees();

/**
 * setRegistrationFees - get user input for total of conference or seminar fees
 * 
 * @return  total of all conference or seminar fees
 */
double setRegistrationFees();

/**
 * setMealFee - get user input for the meal cost of each meal during the trip
 * 
 * @return  pointer to array of meal costs for each meal during the trip 
 */
double *setMealFee();

/**
 * drivingExpense - Calculate the cost of miles driven with a private vehicle
 * 
 * @param   miles    the total number of miles driven with a private vehicle 
 * @return  total cost of miles driven
 */
double drivingExpense(double miles);

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
double maxExpensesMeal(double arrivalTime, double departureTime);

#endif