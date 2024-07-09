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
        throw 10; // first destructor called than cathc block executed
        cout << "After Throw" << endl;
    }
    catch (...)
    {
        cout << "Catched The Thrown Value" << endl;
    }
    return 0;
}