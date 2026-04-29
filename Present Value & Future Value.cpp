#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <algorithm>

int main() {
    std::string repeat;
    std::cout<<std::fixed <<std::setprecision(2);

    do {
        double value,Inflation_rate,years;

        std::cout << "Enter a value of money: ";
        std::cin >> value;

        std::cout << "Enter an inflation rate(e.g. 7 for 7% ): ";
        std::cin >> Inflation_rate;
        Inflation_rate = Inflation_rate/100.0;

        std::cout << "Enter the time in years: ";
        std::cin >> years;

        std::string Value_type;
        std::cout << "Do you want to calculate the future value(FV) or the present value(PV): ";

        while (Value_type != "FV" && Value_type != "PV" ) {
            std::cin >> Value_type;
            std::transform(Value_type.begin(), Value_type.end(), Value_type.begin(),[](unsigned char c) {
                return std::toupper(c);
            });
            if (Value_type == "FV") {
                double num1 = (1+Inflation_rate);
                double fv = value * std::pow(num1, years);
                std::cout << "Your future value is: " << fv << std::endl;
                break;
            }
            else if (Value_type == "PV") {
                double num1 = (1+Inflation_rate);
                double pv = value / std::pow(num1, years);
                std::cout << "Your present value is: " << pv << std::endl;
                break;
            }
            else {
                std::cout << "Please enter 'FV' to calculate the future value or 'PV' to calculate the present value: " << std::endl;
            }
        }
        std::cout << "Do you want to calculate another value(y/n)";
        std::cin >> repeat;
        std::transform(repeat.begin(), repeat.end(), repeat.begin(),[](unsigned char c) {
                return std::toupper(c);
            });
    }while (repeat == "Y");

    return 0;
}
