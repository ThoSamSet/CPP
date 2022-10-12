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

    //thu nghiem

    return 0;
}