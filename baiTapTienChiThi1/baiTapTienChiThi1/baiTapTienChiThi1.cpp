#include "Header.h"
#include "Define.h"
#include "Math_Fn.h"
#include "String_Fn.h"
#include "ConNguoi.h"

int main()
{
    ConNguoi obj;

    //obj.set();
    obj.setHoTen();
    obj.setTuoi();

    cout << "Nhap quoc tich: ";
    string quocTich;
    cin >> quocTich;
    obj.setQuocTich(quocTich);

    cout << "Ho ten: " << obj.getHoTen() << endl;
    cout << "Tuoi: " << obj.getTuoi() << endl;
    cout << "Quoc tich: " << obj.getQuocTich() << endl;

    //cout << BCNN(18, 27) << endl;
    //cout << IsSoNguyenTo(6) << endl;
    //cout << InHoa("Phan Xuan Dung") << endl;


    return 0;
}




//https://tapit.vn/chi-thi-tien-xu-ly-trong-cc/

//https://blog.luyencode.net/cach-tach-code-c-thanh-file-h-va-cpp/#tai-sao-phai-tach-file
