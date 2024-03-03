#include <iostream>

const int X = 9 + 11;

void hello() {
	
	std::cout << "Hello, world!" << std::endl;

}

int main() {

	setlocale(LC_ALL, "ru");

	//Задание 4
	// second1 = 0x010FFAE3  second2 = 0x010FFAD7
	bool second1 = 1, second2 = 0;

	//Задание 5
	//Адрес: 0x008FF71B Значение: 61 Кодировка: ASCII
	char symbol = 'a';

	//Задание 6
	//Адрес: 0x012FF90B Значение: e0 Кодировка: Windows-1251 
	char symbolRus = 'а';

	//Задание 7
	// Адрес: 0x00BBFA58 Значение:6b 00 Кодировка: UTF-16
	wchar_t sym = 'k';

	//Задание 8
	//Адрес: 0x00BBFA4C Значение:ea ff Кодировка: UTF-16
	wchar_t symRus = 'к';

	//Задание 9
	//Адрес: 0x006FFAA4 и 0x006FFA98 
	//Значения в 16: 14 00 и ec ff cc cc cc cc cc cc cc cc cc cc 14 00
	short number1 = X, number2 = -X;

	//Задание 10
	short maxShort = 0x7FFF;
	short minShort = 0x8000;

	//Задание 11
	unsigned short maxUnsignedShort = 0xFFFF;
	unsigned short minUnsignedShort = 0x0000;

	//Задание 12
	//Адрес в памяти: 0x00D3FE3C Значение: 15 00 00 00
	int Y = 10 + 11;
	//Адрес в памяти: 0x00D3FE30 Значение: eb ff ff ff cc cc cc cc cc cc cc cc 15 00 00 00
	int negativeY = -Y;

	//Задание 13
	int maxInt = 0x7FFFFFFF;
	int minInt = 0x80000000;

	//Задание 14
	unsigned int maxUInt = 0xFFFFFFFF;
	unsigned int minUInt = 0x00000000;

	//Задание 15
	//Адрес в памяти: 0x00EFFB80 Значение: 16 00 00 00 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc cc cc cc 00 00 00 80 cc cc cc cc cc
	long Z = 22;
	//Адрес в памяти: 0x00EFFB74 Значение: ea ff ff ff cc cc cc cc cc cc cc cc 16 00 00 00 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc
	long minusZ = -Z;
	
	//Задание 16
	long maxLong = 0x7FFFFFFFFFFFFFFF;
	long minLong = 0x8000000000000000;

	//Задание 17 
	unsigned long maxULong = 0xFFFFFFFFFFFFFFFF;
	unsigned long minULong = 0;

	//Задание 18
	//Адрес в памяти: 0x009CFBE8 Значение: 00 00 40 41 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc
	float S = 1.0 + 11;
	//Адрес в памяти: 0x009CFBDC Значение: 00 00 40 c1 cc cc cc cc cc cc cc cc 00 00 40 41 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc
	float minusS = -S;

	//Задание 19
	double result1 = 1.0 / 0.0; // Результат: 1.#INF (бесконечность)
	double result2 = -1.0 / 0.0; // Результат: -1.#INF (отрицательная бесконечность)
	double result3 = 0.0 / 0.0; // Результат: -1.#IND (не число)

	//Задание 20
	char charVar = 'A';
	wchar_t wideCharVar = L'B';
	short shortVar = 42;
	int intVar = 1234;
	float floatVar = 3.14f;
	double doubleVar = 2.71828;

	char* charPtr = &charVar;
	wchar_t* wideCharPtr = &wideCharVar;
	short* shortPtr = &shortVar;
	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	double* doublePtr = &doubleVar;

	charPtr += 3;
	wideCharPtr += 3;
	shortPtr += 3;
	intPtr += 3;
	floatPtr += 3;
	doublePtr += 3;

	//Задание 21
	void (*pFunction)();
	pFunction = &hello;

	return 0;
}