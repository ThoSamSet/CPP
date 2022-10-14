#include <iostream>

using namespace std;

class ConNguoi
{
    string hoTen;
    int tuoi;

public:
    string getHoTen()
    {
        return hoTen;
    };

public:
    void setHoTen(string _hoTen)
    {
        hoTen = _hoTen;
    };
};

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