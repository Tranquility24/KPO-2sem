#include "pch.h"

void enterIndexNumberYear(int& year, int& indexNumber, const bool& leapYear)
{
	std::string	strYear, strIndexNumber;

	while (true) {

		std::cout << "Введите порядковый номер дня в году(формат ДДД):";
		std::getline(std::cin, strIndexNumber);

		if (strIndexNumber.size() != 3)
		{
			continue;
		}
		
		for (auto number : strIndexNumber)
		{
			if ((int)number < 48|| (int)number > 57)
			{
				continue;
			}
		}

		indexNumber = (strIndexNumber.at(0) - 48) * 100 + (strIndexNumber.at(1) - 48) * 10 + (strIndexNumber.at(2) - 48) * 1;

		if (leapYear && indexNumber > 366)
		{
			continue;
		}
		
		if (!leapYear && indexNumber > 355)
		{
			continue;
		}
		
		break;

	}

	while (true) {

		std::cout << "Введите год(формат ГГГГ):";
		std::getline(std::cin, strYear);

		if (strYear.size() != 4)
		{
			continue;
		}

		for (auto number : strYear)
		{
			if ((int)number < 48 || (int)number > 57)
			{
				continue;
			}
		}

		year = (strYear.at(0) - 48) * 1000 + (strYear.at(1) - 48) * 100 + (strYear.at(2) - 48) * 10 + (strYear.at(3) - 48) * 1;

		break;
	}

}