#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    // Tạo biến
    int n, i = 1;
    long S = 0;

    // Nhập dữ liệu từ bàn phím 
    // Số đã nhập phải lớn hơn 0
    // nếu n < 0 thì nhập lại 
    do
    {
        cout << "Nhập vào số nguyên lớn hơn 0: ";
        cin >> n;
        if(n <= 0)
        {
            cout << "Số n phải lớn hơn 0!!!" << endl;
        }
    }while(n <= 0);

    // Sử dụng for() để tính tổng các ước số của n
    cout << "Các ước số của " << n << " là: ";
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << " " << i;
            S = S + i;
        }
    }
    cout << endl;

    // xuất kết quả
    cout << "Tổng các ước số của " << n << " là: " << S << endl;

    return 0;
}