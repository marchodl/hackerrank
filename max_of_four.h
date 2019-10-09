#pragma once
#include"std.h"


int max_of_four(int a, int b, int c, int d)
{
	//cout << max({ a,b,c,d });
	return max(a, max(b, max(c, d)));

}