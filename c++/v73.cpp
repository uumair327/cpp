#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor Called" << endl;
    }
    ~Test()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    try
    {
        Test t;
        throw 10;
        cout << "After Throw" << endl;
    }
    catch (...)
    {
        cout << "Catched The Thrown Value" << endl;
    }
    return 0;
}