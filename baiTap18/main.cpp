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

    // Gán biến n cho temp, sử dụng temp như một biến thay thế cho n
    temp = n;
    // Nếu n == 0 thì n có 1 chữ số
    if(n == 0) count = 1;
    // Nếu temp khác 0 thì sử dụng while để đếm số
    while(temp != 0)
    {
        // Cứ sau mỗi một vòng lặp thì count tăng thêm 1
        count++;
        // Chia lấy nguyên cho 10, cứ mỗi lần chia thì số n sẽ có thêm một chữ số
        temp = temp / 10;
    }

    // Xuất kết quả
    cout << "Số " << n << " có " << count << " chữ số!! " << endl;

    return 0;
}