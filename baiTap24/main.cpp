#include <iostream>

using namespace std;

// int* F()
// {
//     return new int(100);
// }

// int main()
// {
//     int* p;
//     p = F();
//     cout << *p << endl;
//     delete p;

//     return 0;
// }

class Cast {
    string* p;
public:
    Cast(const string s = "") : p(new string(s)) {}
    string get() const { return *p; }
};

int main()
{
    Cast* p(new Cast("Lucifer"));
    cout << p->get() << endl;
    delete p;

    return 0;
}