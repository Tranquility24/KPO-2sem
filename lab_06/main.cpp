#include <iostream>
#include "stdafx.h"

#include "C:\Applications\Laboratory works\2 sem\Narkevich 2 sem\LaboratoryWorkKPO2sem\lab_06L\Dictionary.h"
#pragma comment(lib, "C:\Applications\Laboratory works\2 sem\Narkevich 2 sem\LaboratoryWorkKPO2sem\lab_06L\Debug\\lab_06L.lib")

int main() {

#if defined(TEST_CREATE_01) + defined(TEST_CREATE_02) + defined(TEST_ADDENTRY_03) + defined(TEST_ADDENTRY_04) + defined(TEST_GETENTRY_05) + defined(TEST_GETENTRY_06) + defined(TEST_UPDENTRY_07) + defined(TEST_UPDENTRY_08) + defined(TEST_DICTIONARY) > 1
#error "Only one macro from the list can be defined"
#endif

	setlocale(LC_ALL, "rus");

	try
	{

#ifdef TEST_CREATE_01
		Dictionary::Instance d8 = Dictionary::Create("������������������������������", 120);
#endif 

#ifdef TEST_CREATE_02
		Dictionary::Instance d8 = Dictionary::Create("�������������", 120);
#endif

		Dictionary::Instance d1 = Dictionary::Create("�������������", 5);
		Dictionary::Entry e1 = { 1, "������" }, e2 = { 2, "�������" },
			e3 = { 3,"������" }, e4 = { 4, "����������" }, e5 = { 2, "�����" };

#ifdef TEST_GETENTRY_05
		Dictionary::Entry test05 = Dictionary::GetEntry(d1, 5);
#endif

#ifdef TEST_GETENTRY_06
		Dictionary::DelEntry(d1, 5);
#endif

#ifdef TEST_UPDENTRY_07
		Dictionary::UpdEntry(d1, 3, e5);
#endif

		Dictionary::AddEntry(d1, e1);
		Dictionary::AddEntry(d1, e2);
		Dictionary::AddEntry(d1, e3);
		Dictionary::AddEntry(d1, e4);

#ifdef TEST_ADDENTRY_03
		Dictionary::Entry e6 = { 5, "�������" }, e7 = { 6, "��������" };
		Dictionary::AddEntry(d1, e6);
		Dictionary::AddEntry(d1, e7);
#endif

#ifdef TEST_ADDENTRY_04
		Dictionary::Entry e6 = { 1, "�������" };
		Dictionary::AddEntry(d1, e6);
#endif

#ifdef TEST_UPDENTRY_08
		Dictionary::Entry e6 = { 1, "�������" };
		Dictionary::UpdEntry(d1, 4, e6);
#endif
		Dictionary::Entry ex2 = Dictionary::GetEntry(d1, 4);
		Dictionary::DelEntry(d1, 2);
		Dictionary::Entry newEntry1 = { 6, "�����" };
		Dictionary::UpdEntry(d1, 3, newEntry1);
		Dictionary::Print(d1);
		Dictionary::Instance d2 = Dictionary::Create("��������", 5);
		Dictionary::Entry s1 = { 1, "������" }, s2 = { 2, "������" }, s3 = { 3, "�������" };
		Dictionary::AddEntry(d2, s1);
		Dictionary::AddEntry(d2, s2);
		Dictionary::AddEntry(d2, s3);
		Dictionary::Entry newEntry3 = { 3, "��������" };
		Dictionary::UpdEntry(d2, 3, newEntry3);
		Dictionary::Print(d2);
		Dictionary::Delete(d1);
		Dictionary::Delete(d2);

#ifdef TEST_DICTIONARY

		Dictionary::Instance teachersDictionary = Dictionary::Create("�������������", 7);
		Dictionary::Instance studentsDictionary = Dictionary::Create("��������", 7);

		Dictionary::Entry student1 = { 1, "������" }, student2 = { 2, "�������" },
			student3 = { 3, "��������" }, student4 = { 4, "�����" }, student5 = { 5, "��������" },
			student6 = { 6, "������" }, student7 = { 7, "�������" };

		Dictionary::AddEntry(studentsDictionary, student1);
		Dictionary::AddEntry(studentsDictionary, student2);
		Dictionary::AddEntry(studentsDictionary, student3);
		Dictionary::AddEntry(studentsDictionary, student4);
		Dictionary::AddEntry(studentsDictionary, student5);
		Dictionary::AddEntry(studentsDictionary, student6);
		Dictionary::AddEntry(studentsDictionary, student7);

		Dictionary::Entry student40 = { 40, "������������" };
		Dictionary::UpdEntry(studentsDictionary, 3, student40);

		Dictionary::Entry teacher1 = { 1, "��������" }, teacher2 = { 2, "��������" },
			teacher3 = { 3, "������" }, teacher4 = { 4, "�������" }, teacher5 = { 5, "������" },
			teacher6 = { 6, "��������" }, teacher7 = { 7, "�������" };

		Dictionary::AddEntry(teachersDictionary, teacher1);
		Dictionary::AddEntry(teachersDictionary, teacher2);
		Dictionary::AddEntry(teachersDictionary, teacher3);
		Dictionary::AddEntry(teachersDictionary, teacher4);
		Dictionary::AddEntry(teachersDictionary, teacher5);
		Dictionary::AddEntry(teachersDictionary, teacher6);
		Dictionary::AddEntry(teachersDictionary, teacher7);

		Dictionary::DelEntry(teachersDictionary, 3);
		Dictionary::Entry teacher10 = { 10, "��������" };
		Dictionary::AddEntry(teachersDictionary, teacher10);

		Dictionary::Print(studentsDictionary);
		Dictionary::Print(teachersDictionary);

		Dictionary::Entry teacher = Dictionary::GetEntry(teachersDictionary, 1);

		std::cout << "������ ������ ��������:" << std::endl;
		std::cout << "���: " << teacher.name << std::endl;
		std::cout << "ID: " << teacher.id << std::endl;


		Dictionary::Delete(teachersDictionary);
		Dictionary::Delete(studentsDictionary);
#endif



	}
	catch (const char* e)
	{
		std::cout << e << std::endl;
	};

	system("pause");

	return 0;

}