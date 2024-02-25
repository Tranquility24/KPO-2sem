#include "pch.h"

void errorEnterData() {

    std::cout << "Вы ввели что-то неверно.\n Попробуйте ещё раз..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    system("cls");
}