#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    // Tạo biến
    int n, max = 1;
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

    // Các ước số chẵn của số n
    cout << "Các ước số chẵn của " << n << " là:" << endl;
    for(int i = 1; i <= n ;i++)
    {
        // Nếu n chia hết cho i và i là số lẻ
        if((n % i == 0) && (i % 2 == 1))
        {
            if(i > max)
            {
                max = i;
            }
            cout << " " << i;
        }
    }

    cout << endl << "Ước số lẻ lớn nhất của " << n << " là: " << max << endl;

    return 0;
}