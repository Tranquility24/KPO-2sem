#include "pch.h"

struct holidays
{
	std::string name;
	int day;
	int month;
};

std::string getHolidays(const std::vector<int>& dataInt)
{
	holidays holidaysYear[3]{ {"Всемирный день борьбы с ожирением", 4, 3}, {"День влюблённых", 14, 2}, {"День защитников отечества", 23, 2} };

	for (int i = 0; i < 3; i++)
	{
		if (holidaysYear[i].day == dataInt.at(0) && holidaysYear[i].month == dataInt.at(1))
		{
			return holidaysYear[i].name;
		}
	}

	return "больше праздников не существует";
}