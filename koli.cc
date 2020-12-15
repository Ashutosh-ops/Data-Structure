#include <iostream>

using namespace std;

class home
{
public:
    home()
    {
        int e;
        char y;
        cout << sizeof(e) << endl;
        cout << sizeof(y) << endl;
    }
    void cool()
    {
        int c,b,a;
    }
    void magnet()
    {
        int o,p,q;
    }
    void magent1()
    {
        int r,s,t;
    }
};

void fun()
{
    int o, p;
    cout << "Hello world" << endl;
}

int main()
{
    home *p = new home();
    cout << sizeof(*p) << endl;
    cout << sizeof(fun());
    cout << endl;
    return 0;
}