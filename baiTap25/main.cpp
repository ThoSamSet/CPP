#include <iostream>
#include <cmath>

using namespace std;

//Các hàm về tính toán - Math
//Ước chung lớn nhất
int UCLN(int a, int b)
{
    if (a == b) return a;
	else if (a > b) return UCLN(a - b, b);
	else return UCLN(a, b - a);
};

//Bội chung nhỏ nhất
int BCNN(int a, int b)
{
    int uocChung = UCLN(a, b);
	return a * b / uocChung;
};

//Kiểm tra số nguyên tố
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
};

//Các hàm về chuỗi - String
string InHoa(string chuoi)
{
    for (int i = 0; i < chuoi.size(); i++)
	{
		if (chuoi[i] >= 'a' && chuoi[i] <= 'z') chuoi[i] = chuoi[i] - 'a' + 'A';
	}
	return chuoi;
};

string InThuong(string chuoi)
{
    for (int i = 0; i < chuoi.size(); i++)
	{
		if (chuoi[i] >= 'A' && chuoi[i] <= 'Z') chuoi[i] = chuoi[i] - 'A' + 'a';
	}
	return chuoi;
};

//Lớp ConNguoi
class ConNguoi
{
    string hoTen;
    int tuoi;

public:
    ConNguoi()
    {
        this->hoTen = "";
        this->tuoi = 0;
    }

    ~ConNguoi()
    {
        this->hoTen = "";
        this->tuoi = 0;
    }

    //Lấy họ tên
    string getHoTen()
    {
        return hoTen;
    };

    //Lấy tuôi  
    int getTuoi()
    {
        return tuoi;
    }

public:
    //Set họ tên
    void setHoTen(string _hoTen)
    {
        _hoTen = InHoa(_hoTen);
        hoTen = _hoTen;
    };

    //Set tuổi
    void setTuoi(int _tuoi)
    {
        tuoi = _tuoi;
    };
};

int main()
{
    ConNguoi obj;

    string hoTen;
    cout << "Nhập họ và tên: ";
    getline(cin, hoTen);
    obj.setHoTen(hoTen);

    int tuoi;
    cout << "Nhập tuổi: ";
    cin >> tuoi;
    obj.setTuoi(tuoi);

    cout << "Họ và Tên: " << obj.getHoTen() << endl;
    cout << "Tuổi: " << obj.getTuoi() << endl;

    return 0;
}