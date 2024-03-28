#include <iostream>
#include "Call.h"

int main() {

	int a = 2, b = 3, c = 4, d = 5;

	int function1 = Call::sumCdecl(a, b, c);

	int function2 = Call::multiplicationCstd(a, b, c);

	int function3 = Call::sumCfst(a, b, c, d);

	system("pause");

	return 0;
}