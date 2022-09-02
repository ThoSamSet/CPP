#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tạo biến
    int temp, n, max;

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

    // Gán temp = n
    temp = n;

    // Tìm chữ số đầu tiên bằng cách chia lấy dư cho 10
    do 
    {
        max = temp % 10;
    }while(temp /= 10);

    // In kết quả 
    cout << " Chữ số đầu tiên của " << n << " là: " << max << endl;



    return 0;
}