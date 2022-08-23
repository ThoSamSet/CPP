#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tính tổng S(n)
    // Tạo biến
    int i, n;
    float S;

    //  cho giá trị ban đầu
    S = 0;
    i = 1;

    // Nhập giá trị tư bàn phím    
    do
    {
        // Cho đến khi n > 1 thì 
        cout << "Nhập số N lớn hơn 1:" << endl;
        cin >> n;
        // Nếu số đã nhập n < 1 thì in hướng dẫn
        if(n < 1)
        {
            cout << "N phải lớn hơn 1" << endl;
        }
    } while (n < 1);
    

    // khi mà i < n(số đã nhập) 
    while(i <= n)
    {
        S = S + 1.0 / (i * 2);
        i++;
    }

    // Xuất kết quả
    cout << "S=" << S << endl;
    
    return 0;
}