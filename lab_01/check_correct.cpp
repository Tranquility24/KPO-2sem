#include "pch.h"

bool checkCorrect(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year) {

    if (dataInt.at(1) > 12 || dataInt.at(1) == 0) {

        return true;

    }

    int amountOfDays = year.at(dataInt.at(1));
    leapYear ? ++amountOfDays : false;

    if (dataInt.at(0) > amountOfDays || dataInt.at(0) == 0) {

        return true;

    }

    return false;
}