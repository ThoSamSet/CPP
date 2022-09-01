#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    // Tạo biến
    long n, temp;
    int count = 0;

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

    // Gán bién n = temp, sử dụng temp để đếm số
    temp = n;
    // nếu n == 0 thì n có 1 chữ số
    if(n == 0) count = 1;
    // Nếu temp != 0 thì sử dụng while để đếm
    while(temp != 0)
    {
        // Sau mỗi vòng lặp, nếu temp là số lẻ thì count tăng thêm 1
        if(temp % 2 == 1) 
        {
            count++;
            cout << " " << temp;
        }
        // Chia lấy nguyên cho 10, cứ mỗi lần chia thì số n có một chữ số
        temp = temp / 10;
    }

    // Xuất kết quả
    cout << endl << "Số " << n << " có " << count << " chữ số lẻ!!" << endl;
    
    return 0;
}