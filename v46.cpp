#include <iostream>
using namespace std;

class Test
{
    int a;

public:
    Test()
    {
        a = 0;
    }
    void show()
    {
        cout << a << endl;
    }
    // Prefix increment operator
    void operator++()
    {
        a++;
    }
    // Prefix decrement operator
    void operator--()
    {
        a--;
    }
};

int main()
{
    Test t;
    t.show(); // Output: 0
    ++t;
    t.show(); // Output: 1
    --t;
    t.show(); // Output: 0
    return 0;
}
