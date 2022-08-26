#include <iostream>
#include <stdio.h>
#include <math.h>

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
    float x, z, q;
    int n;

    // Nhập giá trị từ bàn phím
    cout << " Nhập vào cơ số x; " << endl;
    cin >> x;
    cout << " Nhập vào số mũ n; " << endl;
    cin >> n;

    // Gọi hàm power_n() để tính x^n
    z = Power_n(x, n);

    // Gọi hàm pow() để tính x^n
    q = pow(x, n);

    // Xuất kết quả
    cout << "Kết quả của ";
    cout << x << "^" << n << " tính theo cách dùng hàm power_n() là: ";
    cout << z << endl;

    cout << "Kết quả của ";
    cout << x << "^" << n << " tính theo cách dùng hàm pow() là: ";
    cout << q << endl;

    return 0;
}
