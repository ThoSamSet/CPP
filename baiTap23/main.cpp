#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tạo biến
    int n;

    // Nhập dữ liệu từ bàn phím 
    // Số đã nhập phải lớn hơn 0
    // nếu n < 0 thì nhập lại 
    do
    {
        cout << "Nhập vào số nguyên lớn hơn 0: ";
        cin >> n;
        if(n < 0)
        {
            cout << "Số n phải lớn hơn hoặc bằng 0!" << endl;
        }
    }while(n < 0);

    cout << "Số "  << n << " có toàn các chữ số lẻ hay không?" << endl;

    // Khai báo biến check để kiểm tra tính đúng sai
    int check = 1;
    // Dùng vòng lặp while để kiểm tra, nếu chữ số trong n là số lẻ thì check = 1, ngược lại nếu không phải thì check = 0
    while(n /= 10)
    {
        if((n % 10) % 2 == 0)
        {
            check = 0;
            break;
        }
    }
    // Nếu check == 1 thì đúng
    if(check == 1) cout << "Đúng" << endl;
    else cout << "Sai" << endl;

    return 0;
}