#include <iostream>

using namespace std;

int* F()
{
    return new int(100);
}

int main()
{
    int* p;
    p = F();
    cout << *p << endl;
    delete p;

    return 0;
}