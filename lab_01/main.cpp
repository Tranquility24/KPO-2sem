#include "pch.h"

void errorEnterData();
std::string enterData(void (*errorEnterData)());
std::vector<int> convertDataToInt(const std::string& dataStr);
bool checkLeapYear(int year);
bool checkCorrect(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year);
int serialNumberDay(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year);
int daysBirth(const std::vector<int>& dataInt, const bool& leapYear, const std::map<int, int>& year, const int& serialNumber);

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

    if (leapYear) {

        std::cout << "������ ��� �������� ����������!" << std::endl;

    }
    else {
        std::cout << "������ ��� �� �������� ����������!" << std::endl;
    }

    int serialNumber = serialNumberDay(dataInt, leapYear, year);

    std::cout << "���������� ����� ��� � ����:" << serialNumber << std::endl;

    int dBirth = daysBirth(dataInt, leapYear, year, serialNumber);

    std::cout << "���� �������� �� ��� ��������:" << dBirth << std::endl;

    system("pause");

    return 0;
}