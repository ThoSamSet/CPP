#include <iostream>
#include "ConNguoi.h"

using namespace std;

int main()
{
    ConNguoi obj;

    string hoTen;
    cout << "Nhập họ và tên: ";
    cin >> hoTen;

    obj.setHoTen(hoTen);

    cout << obj.getHoTen() << endl;

    return 0;
}