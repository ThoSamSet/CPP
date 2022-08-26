#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Tạo biến
    // cách
    int w = 0;      
    // P = tổng phụ, n = số nhập từ bàn phím
    int P, n = 1;
    // S = tổng chính
    int S = 0;
    int i = 1;
    
    // Nhập số n lớn hơn 0
    do
    {
        cout << "Nhập n: " << endl;
        cin >> n;
        if(n < 1)
        {
            cout << "số n phải lớn hơn bằng 1" << endl;
        }
    }while(n < 1);

    // Nhập cách
    cout << "Nhập cách:" << endl;
    cin >> w;

    // Rẽ nhánh chương trình 
    switch (w)
    {
    case 1:
        // Sử dụng while
        while(i <= n)
        {
            P = P * i;
            S = S + P;
            i++;
        }

        cout << "S = " << S << endl;
        break;
    
    default:
        // Sử dụng vòng lặp for
        for(i = 1; i <= n; i++)
        {
            P = P * i;
            S = S + P;
        }

        cout << "S = " << S << endl;
        break;
    }

    // test

    return 0;
}
