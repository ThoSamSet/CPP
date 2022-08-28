#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tạo biến
    int i = 1, n;
    float x, T = 1, S = 0;

    // cách
    int cach = 0;

    // Nhập dữ liệu từ bàn phím 
    cout << "Nhập vào số x:";
    cin >> x;
    cout << "Nhập vào số y:";
    cin >> n;

    // Nhập cách
    cout << "Nhập cách:";
    cin >> cach;

    // Rẽ nhánh chương trình 
    switch (cach)
    {
    case 1:
        // Sử dụng for để tính biểu thức
        for(i = 1; i <= n; i++)
        {
            T = T * x;
            S = S + T;
        }
        break;
    default:
        // Sử dụng vòng lặp while để tính biểu thức 
        while(i <= n)
        {
            T = T * x;
            S = S + T;
            i++;
        }
        break;
    }

    // xuất kết quả
    cout << "Tổng = " << S << endl;

    return 0;
}
