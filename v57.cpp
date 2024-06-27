#include <iostream>
using namespace std;

class base
{
public:
    ~base()
    {
        cout << "Base class Destructor" << endl;
    }
};

class der : public base
{
public:
    ~der()
    {
        cout << "Derived class Destructor" << endl;
        // base::~base();
    }
};

int main()
{
    der d;
    return 0;
}