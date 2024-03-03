#include <iostream>

const int X = 9 + 11;

void hello() {
	
	std::cout << "Hello, world!" << std::endl;

}

int main() {

	setlocale(LC_ALL, "ru");

	//������� 4
	// second1 = 0x010FFAE3  second2 = 0x010FFAD7
	bool second1 = 1, second2 = 0;

	//������� 5
	//�����: 0x008FF71B ��������: 61 ���������: ASCII
	char symbol = 'a';

	//������� 6
	//�����: 0x012FF90B ��������: e0 ���������: Windows-1251 
	char symbolRus = '�';

	//������� 7
	// �����: 0x00BBFA58 ��������:6b 00 ���������: UTF-16
	wchar_t sym = 'k';

	//������� 8
	//�����: 0x00BBFA4C ��������:ea ff ���������: UTF-16
	wchar_t symRus = '�';

	//������� 9
	//�����: 0x006FFAA4 � 0x006FFA98 
	//�������� � 16: 14 00 � ec ff cc cc cc cc cc cc cc cc cc cc 14 00
	short number1 = X, number2 = -X;

	//������� 10
	short maxShort = 0x7FFF;
	short minShort = 0x8000;

	//������� 11
	unsigned short maxUnsignedShort = 0xFFFF;
	unsigned short minUnsignedShort = 0x0000;

	//������� 12
	//����� � ������: 0x00D3FE3C ��������: 15 00 00 00
	int Y = 10 + 11;
	//����� � ������: 0x00D3FE30 ��������: eb ff ff ff cc cc cc cc cc cc cc cc 15 00 00 00
	int negativeY = -Y;

	//������� 13
	int maxInt = 0x7FFFFFFF;
	int minInt = 0x80000000;

	//������� 14
	unsigned int maxUInt = 0xFFFFFFFF;
	unsigned int minUInt = 0x00000000;

	//������� 15
	//����� � ������: 0x00EFFB80 ��������: 16 00 00 00 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc cc cc cc 00 00 00 80 cc cc cc cc cc
	long Z = 22;
	//����� � ������: 0x00EFFB74 ��������: ea ff ff ff cc cc cc cc cc cc cc cc 16 00 00 00 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc
	long minusZ = -Z;
	
	//������� 16
	long maxLong = 0x7FFFFFFFFFFFFFFF;
	long minLong = 0x8000000000000000;

	//������� 17 
	unsigned long maxULong = 0xFFFFFFFFFFFFFFFF;
	unsigned long minULong = 0;

	//������� 18
	//����� � ������: 0x009CFBE8 ��������: 00 00 40 41 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc
	float S = 1.0 + 11;
	//����� � ������: 0x009CFBDC ��������: 00 00 40 c1 cc cc cc cc cc cc cc cc 00 00 40 41 cc cc cc cc cc cc cc cc 00 00 00 00 cc cc cc cc cc cc cc cc ff ff ff ff cc cc cc cc cc
	float minusS = -S;

	//������� 19
	double result1 = 1.0 / 0.0; // ���������: 1.#INF (�������������)
	double result2 = -1.0 / 0.0; // ���������: -1.#INF (������������� �������������)
	double result3 = 0.0 / 0.0; // ���������: -1.#IND (�� �����)

	//������� 20
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

	//������� 21
	void (*pFunction)();
	pFunction = &hello;

	return 0;
}