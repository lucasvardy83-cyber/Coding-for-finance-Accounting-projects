#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double Principal;
    std::cout << "Enter your principal amount: ";
    std::cin >> Principal;

    double Annual_interest_rate;
    std::cout << "Enter your annual interest rate(e.g. 7 for 7%): ";
    std::cin >> Annual_interest_rate;
    Annual_interest_rate = Annual_interest_rate/100.0;


    double years;
    std::cout << "Enter the number of years: ";
    std::cin >> years;

    double compounding_periods ;
    std::cout << "Enter the number of compounding periods per year: ";
    std::cin >> compounding_periods ;

    double Simple_Interest = Principal * Annual_interest_rate * years;
    double Interest_total = Principal + Simple_Interest;
    double num1 =(1+ Annual_interest_rate/compounding_periods);
    double num2 =compounding_periods*years;
    double Compound_interest_total = Principal * std::pow(num1,num2) ;
    double Compound_interest_earned = Compound_interest_total - Principal;

    std::cout << std::fixed << std::setprecision(2);
    std::cout<<"Your simple interest earned is: "<< Simple_Interest << std::endl;
    std::cout<<"Your interest total is: " << Interest_total << std::endl;
    std::cout<<"Your compound interest total is: " <<Compound_interest_total << std::endl;
    std::cout<<"Your compound interest earned is: " << Compound_interest_earned << std::endl;


    return 0;
}
