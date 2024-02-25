#include "pch.h"

int daysBirth(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year, const int& serialNumber) {

    if (dataInt.at(1) == 1 && dataInt.at(0) < 24) {

        return 24 - dataInt.at(0);
    }

    int amountDays{};

    leapYear ? amountDays = 366 : amountDays = 365;

    amountDays -= serialNumber;
    amountDays += 24;

    return amountDays;
}