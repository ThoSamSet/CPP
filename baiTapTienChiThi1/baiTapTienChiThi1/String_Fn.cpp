#include "String_Fn.h"

string InHoa(string chuoi)
{
	for (int i = 0; i < chuoi.size(); i++)
	{
		if (chuoi[i] >= 'a' && chuoi[i] <= 'z') chuoi[i] = chuoi[i] - 'a' + 'A';
	}
	return chuoi;
}

string InThuong(string chuoi)
{
	for (int i = 0; i < chuoi.size(); i++)
	{
		if (chuoi[i] >= 'A' && chuoi[i] <= 'Z') chuoi[i] = chuoi[i] - 'A' + 'a';
	}
	return chuoi;
}