#include "Math_Fn.h"

int UCLN(int a, int b)
{
	if (a == b) return a;
	else if (a > b) return UCLN(a - b, b);
	else return UCLN(a, b - a);
}

int BCNN(int a, int b)
{
	int uocChung = UCLN(a, b);
	return a * b / uocChung;
}

bool IsSoNguyenTo(int n)
{
	if (n < 2) return false;
	else if (n == 2) return true;
	else
	{
		int num = sqrt(n);
		for (int i = 2; i <= num; i++)
		{
			if (n % i == 0) return false;
		}
		return true;
	}
}