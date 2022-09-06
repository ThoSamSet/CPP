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

    temp = n;

    // Nếu n == 0 thì count = 1
    if(n == 0) count = 1;

    // Sử dụng do while để tìm chữ số lớn nhất 
    // Mỗi lần tìm thấy thi count++
    do
    {
        i = n % 10;
        if(i == max) count++;
        if(i > max) max = i;
    } while (n /= 10);

    // In két quả
    cout << "Chữ số lớn nhất trong " << temp << "  là: " << max << endl;
    cout << " Có " << count << " chữ số " << max << " trong số " << temp << endl;
    
    
    return 0;
}