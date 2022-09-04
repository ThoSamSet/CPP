#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tạo biến
    int temp, n, i, max = 0;

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

    //  Nếu n == 0 thì sớ lớn nhất bằng 0
    if(n == 0) max = 0;

    // Sử dụng do while để tìm số lớn nhất 
    do
    {
        i = n % 10;
        if(i > max)
        {
            max = i;
        }
    }while(n /= 10);  

    // In kết quả
    cout << "Chữ số lớn nhất của " << n << " là: " << max << endl;

    return 0;
}