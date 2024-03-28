#pragma once

namespace Call
{
	int _cdecl sumCdecl(int a, int b, int c);
	int _stdcall multiplicationCstd(int& a, int b, int c);
	int _fastcall sumCfst(int a, int b, int c, int d);
}