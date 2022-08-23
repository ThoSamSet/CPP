#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tính tổng S(n)
    // Tạo biến
    int i, n;
    long S;

    //  cho giá trị ban đầu
    S = 0;
    i = 1;

    // Nhập giá trị tư bàn phím
    cout << "nhap so:" << endl;
    cin >> n;

    // khi mà i < n(số đã nhập) 
    while(i <= n)
    {
        S = S + i * i;
        i++;
    }

    // Xuất kết quả
    cout << "S=" << S << endl;
    
    return 0;
}