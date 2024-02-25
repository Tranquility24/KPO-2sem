#include "pch.h"

int charToInt(char symbol) {

	return symbol & 0x0F;

}

std::vector<int> convertDataToInt(const std::string& dataStr) {

    std::vector<int> dataInt;

    dataInt.push_back((charToInt(dataStr.at(0)) * 10) + (charToInt(dataStr.at(1)) * 1));
    dataInt.push_back((charToInt(dataStr.at(2)) * 10) + (charToInt(dataStr.at(3)) * 1));
    dataInt.push_back((charToInt(dataStr.at(4)) * 1000) + (charToInt(dataStr.at(5)) * 100) + (charToInt(dataStr.at(6)) * 10) + (charToInt(dataStr.at(7)) * 1));

    return dataInt;
}