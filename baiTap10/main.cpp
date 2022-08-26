#include <iostream>
#include <stdio.h>

using namespace std;

// hàm tính luỹ thừa
double Power_n(float x, int n)
{
    // Khai báo biến result result = 1, vì kết quả của phép nhân nên sẽ gán giá trị bằng 1
    // nếu gắn = 0 thì kết quả trả về luôn luôn bằng 0
    float result = 1;

    // Sử dụng vòng lặp while với điều kiện n--
    // n sẽ giảm đến khi bằng 0 thì vòng lặp kết thúc
    while(n--)
    {
        // Ví dụ n = 4, x = 3 thì ( result = result * 4) thực hiện 4 lần như vậy
        result = result * x;
    }
    return result;
}

int main()
{
    // Tạo biến
    float x, z;
    int n;

    // Nhập giá trị từ bàn phím
    cout << " Nhập vào cơ số x; " << endl;
    cin >> x;
    cout << " Nhập vào số mũ n; " << endl;
    cin >> n;

    // Gọi hàm power_n() để tính x^n
    z = Power_n(x, n);

    // Xuất kết quả
    cout << "Kết quả của ";
    cout << x << "^" << n << "=" << z << endl;

    return 0;
}
