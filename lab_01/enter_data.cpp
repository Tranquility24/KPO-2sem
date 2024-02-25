#include "pch.h"

std::string enterData(void (*errorEnterData)()) {

    std::string inputData;
    bool valid = false;

    do {

        std::cout << "Ââåäèòå äàòó(ôîðìàòå ÄÄÌÌÃÃÃÃ):";
        std::getline(std::cin, inputData);

        if (inputData.length() == 8) {

            valid = true;

            for (auto c : inputData) {

                if (!std::isdigit(c)) {

                    valid = false;
                    break;

                }
            }
        }

        if (!valid) {

            errorEnterData();

        }

    } while (!valid);

    return inputData;

}