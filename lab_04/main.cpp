#include <iostream>

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct date {

	day dd;
	month mm;
	year yyyy;

	date() : dd(0), mm(0), yyyy(0) {}

	date(int d, int m, int y) : dd(d), mm(m), yyyy(y) {}

    bool operator<(const date& other) const {
        if (yyyy < other.yyyy)
            return true;
        else if (yyyy == other.yyyy && mm < other.mm)
            return true;
        else if (yyyy == other.yyyy && mm == other.mm && dd < other.dd)
            return true;
        else
            return false;
    }

    bool operator>(const date& other) const {

        return other < *this;

    }

    bool operator==(const date& other) const {

        return yyyy == other.yyyy && mm == other.mm && dd == other.dd;
    }



};

typedef std::string ProcessorType;
typedef std::string GraphicsCardType;
typedef int RAMSize;
typedef int HardDiskSize;

struct Computer {

    ProcessorType processor;
    GraphicsCardType graphicsCard;
    RAMSize ramSizeGB;
    HardDiskSize hardDiskSizeGB;

    Computer(const ProcessorType& proc, const GraphicsCardType& gpu, RAMSize ram, HardDiskSize hdd)
        : processor(proc), graphicsCard(gpu), ramSizeGB(ram), hardDiskSizeGB(hdd) {}

    bool operator<(const Computer& other) const {
        return ramSizeGB < other.ramSizeGB;
    }

    Computer operator+(const Computer& other) const {
        
        Computer combined("Combined " + processor + " / " + other.processor,
            graphicsCard + " / " + other.graphicsCard,
            ramSizeGB + other.ramSizeGB , hardDiskSizeGB + other.hardDiskSizeGB);
        return combined;
    }

    void printInfo() const {
        std::cout << "Processor: " << processor << std::endl;
        std::cout << "Graphics Card: " << graphicsCard << std::endl;
        std::cout << "RAM Size: " << ramSizeGB << " GB" << std::endl;
        std::cout << "Hard Disk Size: " << hardDiskSizeGB << " GB" << std::endl;
    }
};

int main() {

	setlocale(LC_ALL, "ru");

    date date1 = { 7,1,1980 };
    date date2 = { 7,2, 1993 };
    date date3 = { 7, 1, 1980 };

    if (date1 < date2) std::cout << "истина" << std::endl;
    else std::cout << "ложь" << std::endl;

    if (date1 > date2) std::cout << "истина" << std::endl;
    else std::cout << "ложь" << std::endl;

    if (date1 == date2) std::cout << "истина" << std::endl;
    else std::cout << "ложь" << std::endl;

    if (date1 == date3) std::cout << "истина" << std::endl;
    else std::cout << "ложь" << std::endl;

    Computer pc1("Intel Core i7", "NVIDIA GeForce RTX 3080", 16, 1000);
    Computer pc2("AMD Ryzen 9", "AMD Radeon RX 6800 XT", 32, 2000);

    if (pc1 < pc2) {
        std::cout << "В первом компьютере оперативной памяти меньше, чем во втором!" << std::endl;
    }
    else {
        std::cout << "В первом компьютере оперативной памяти больше, чем во втором!" << std::endl;
    }

    Computer combined = pc1 + pc2;
    std::cout << "\nСмешанная информация:" << std::endl;
    combined.printInfo();

	return 0;
}