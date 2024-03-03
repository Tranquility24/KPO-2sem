#include "pch.h"

std::vector<int> indexNumberToDate(const bool& leapYear, int year, int dayOfYear) {

	std::vector<int> result(3);
	result[2] = year;

	int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (leapYear) {
		daysInMonth[1] = 29;
	}

	int month = 0;
	while (dayOfYear > daysInMonth[month]) {
		dayOfYear -= daysInMonth[month];
		++month;
	}

	result[1] = month + 1;
	result[0] = dayOfYear;

	return result;

}