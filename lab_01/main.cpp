#include "pch.h"

void errorEnterData();
std::string enterData(void (*errorEnterData)());
std::vector<int> convertDataToInt(const std::string& dataStr);
bool checkLeapYear(int year);
bool checkCorrect(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year);
int serialNumberDay(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year);
int daysBirth(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year, const int& serialNumber);
std::string monthNames(const int& month);
std::vector<int> indexNumberToDate(const bool& leapYear, int year, int dayOfYear);
void enterIndexNumberYear(int& year, int& indexNumber, const bool& leapYear);


int main() {

    setlocale(LC_ALL, "ru");

    const std::map<int, int> year{
    {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31},
    {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
    };

    std::string dataStr;
    std::vector<int> dataInt;
    bool leapYear, resultCorrect;

    do {

        dataStr = enterData(errorEnterData);

        dataInt = convertDataToInt(dataStr);

        leapYear = checkLeapYear(dataInt.at(2));

        resultCorrect = checkCorrect(dataInt, leapYear, year);

        if (resultCorrect) {

            errorEnterData();
        }

    } while (resultCorrect);

    std::string month = monthNames(dataInt.at(1));

    std::cout << "Дата: " << dataInt.at(0) << " " << month << " " << dataInt.at(2) << "г." << std::endl;

    if (leapYear) {

        std::cout << "Данный год является високосным!" << std::endl;

    }
    else {
        std::cout << "Данный год не является високосным!" << std::endl;
    }

    int serialNumber = serialNumberDay(dataInt, leapYear, year);

    std::cout << "Порядковый номер дня в году:" << serialNumber << std::endl;

    int dBirth = daysBirth(dataInt, leapYear, year, serialNumber);

    std::cout << "Дней осталось до дня рождения:" << dBirth << std::endl;

    int yearF, numberF;

    enterIndexNumberYear(yearF, numberF, leapYear);

    std::vector<int> result = indexNumberToDate(checkLeapYear(yearF), yearF, numberF);

    std::cout << "Дата: " << result.at(0) << " " << monthNames(result.at(1)) << " " << result.at(2) << "г." << std::endl;

    system("pause");

    return 0;
}