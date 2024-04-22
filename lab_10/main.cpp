#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <type_traits>

int main() {

	setlocale(LC_ALL, "ru");
	std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int target1 = 3;
	int num_items1 = std::count(v.begin(), v.end(), target1);
	std::cout << "число: " << target1 << " количество: " << num_items1 << '\n';

	int num_items3 = std::count_if(v.begin(), v.end(), [](int i) { return i % 3 == 0; });
	std::cout << "количество элементов, кратных 3: " << num_items3 << '\n';
	std::cout << std::endl << " Лямбда, захват переменных" << std::endl;

	for (auto i : v) [i]() {if (i % 3 == 0) std::cout << i << " "; }();

	std::cout << std::endl << " Лямбда с параметрами" << std::endl;

	for (auto i : v) [](auto i) {if (i % 3 == 0) std::cout << i << " "; }(i);

	std::cout << std::endl << " Лямбда без параметров" << std::endl;

	for (auto i : v) [i] {if (i % 3 == 0) std::cout << i << " "; }();

	// Задание 1

	auto isPositive = [](int num) { return num > 0; };

	std::cout << isPositive(5) << std::endl;
	std::cout << isPositive(-3) << std::endl;

	// Задание 2

	auto isPositive2 = [](auto value) {

		if (sizeof(value) == 1) {
			
			return (value >= 1 && value <= 127);
		}
		else {
			
			return value > 0;
		}
	};

	std::cout << std::boolalpha;
	std::cout << "isPositive('A'): " << isPositive2('A') << std::endl;  
	std::cout << "isPositive('!'): " << isPositive2('!') << std::endl;  
	std::cout << "isPositive(5): " << isPositive2(5) << std::endl;      
	std::cout << "isPositive(-3): " << isPositive2(-3) << std::endl;    
	std::cout << "isPositive(3.14): " << isPositive2(3.14f) << std::endl; 
	std::cout << "isPositive(-2.5): " << isPositive2(-2.5f) << std::endl; 

	// Задание 3

	auto concatenateStrings = [](const std::string& str1, const std::string& str2) {
		return str1 + str2;
		};

	std::string result = concatenateStrings("Hello, ", "world!");
	std::cout << "Concatenated string: " << result << std::endl;

	// Задание 4
	
	auto longerString = [](const std::string& str1, const std::string& str2) {
		return (str1.length() > str2.length()) ? str1 : str2;
	};

	std::string result1 = longerString("Hello", "world");
	std::cout << "Longer string: " << result1 << std::endl;

	std::string result2 = longerString("GOBLIN", "C++");
	std::cout << "Longer string: " << result2 << std::endl;

	return 0;
}