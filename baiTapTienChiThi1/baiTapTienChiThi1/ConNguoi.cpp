#include "Header.h"
#include "ConNguoi.h"
#include <string>

void ConNguoi::set()
{
    cout << "Nhap ho ten: ";
    fflush(stdin);      //xoa bo dem
    getline(cin, this->hoTen);

    cout << "Nhap tuoi: ";
    cin >> this->tuoi;
}

void ConNguoi::setHoTen()
{
    cout << "Nhap ho ten: ";
    fflush(stdin);      //xoa bo dem
    getline(cin, this->hoTen);
}

void ConNguoi::setTuoi()
{
    cout << "Nhap tuoi: ";
    cin >> this->tuoi;
}

void ConNguoi::setQuocTich(string const _quocTich)
{
    quocTich = _quocTich;
}

string ConNguoi::getHoTen()
{
    return hoTen;
}

int ConNguoi::getTuoi()
{
    return tuoi;
}

string ConNguoi::getQuocTich()
{
    return quocTich;
}