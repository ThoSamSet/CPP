#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tạo biến
    int temp, n, i, max = 1, count = 1;

    // Nhập dữ liệu từ bàn phím 
    // Số đã nhập phải lớn hơn 0
    // nếu n < 0 thì nhập lại 
    do
    {
        cout << "Nhập vào số nguyên lớn hơn 0: ";
        cin >> n;
    }while(n < 0 && cout << "Số n phải lớn hơn 0");

    
    return 0;
}