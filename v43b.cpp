#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    // modifier
    void read()
    {
        a = 10;
        b = 20;
    }
    // accesser
    void show() const
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
    }
};

int main()
{
    Test T1;
    T1.read();
    T1.show();

    return 0;
}