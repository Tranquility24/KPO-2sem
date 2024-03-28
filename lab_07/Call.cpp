#include "Call.h"

int _cdecl Call::sumCdecl(int a, int b, int c)
{
	return a + b + c;
}

int _stdcall Call::multiplicationCstd(int& a, int b, int c)
{
	return a * b * c;
}

int _fastcall Call::sumCfst(int a, int b, int c, int d)
{
	return a + b + c + d;
}