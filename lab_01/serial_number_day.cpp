#include "pch.h"

int serialNumberDay(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year) {

    int serialNumber{};

    for (int i = 1; i < dataInt.at(1); i++)
    {
        serialNumber += year.at(i);
    }

    if (leapYear && dataInt.at(1) > 2)
    {
        serialNumber += 1;
    }

    return serialNumber + dataInt.at(0);

}