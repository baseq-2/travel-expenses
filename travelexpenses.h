#ifndef TRAVELEXPENSES_H
#define TRAVELEXPENSES_H

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