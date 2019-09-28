// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
int main()
{
  // Welcome statement.
  std::cout << "Welcome to the Business Trip Tracker!\n";

// variables.
double days, hotel, meal;
std::string location;
std::string dollar = "$";
// location of the trip.
std::cout << "What is the business trip \"location\"?";
getline(std::cin, location);
// amount of days on the trip.
std::cout << "\nHow many \"days\" will the trip take?";
std::cin >> days;
//std::cin.ignore();
// total hotel expense.
std::cout << "\nWhat is the total \"hotel\" expense?$";
std::cin >> hotel;
//std::cin.ignore();
// total meal expenses.
std::cout << "\nWhat is the total \"meal\" expense?$";
std::cin >> meal;
//std::cin.ignore();
// variable for total trip expenses.
double total = hotel + meal;

std::cout << "\n";
std::stringstream sshotel, ssmeal, sstotal;
sshotel << dollar << std::fixed << std::setprecision(2) << hotel;
ssmeal << dollar << std::fixed << std::setprecision(2) << meal;
sstotal << dollar << std::fixed << std::setprecision(2) << total;
// display trip overview and total expenses.
std::cout <<std::left<< std::setw(20) << "Location"
          <<std::right << std::setw(20) << "Days"
          << std::setw(20) << "Hotel"
          << std::setw(20) << "Meal"
          << std::setw(20) << "Total"<< '\n';

std::cout << std::left << std::setw(20) << location
          << std::right << std::setw(20) << days
          << std::setw(20)<< sshotel.str()
          << std::setw(20) << ssmeal.str()
          << std::setw(20) << sstotal.str() << std::endl;
  /* code */
  return 0;
}
