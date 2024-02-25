#include "pch.h"

std::string monthNames(const int& month)
{
    const std::map<int, std::string> year {
    {1, "������"}, {2, "�������"}, {3, "�����"}, {4, "������"}, {5, "���"},
    {6, "����"}, {7, "����"}, {8, "�������"}, {9, "��������"}, {10, "�������"},
    {11,"������"}, {12, "�������"}
    };

	return year.at(month);
}