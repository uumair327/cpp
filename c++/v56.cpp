#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout << "Base class constructor" << endl;
    }
};
class der : public base
{
public:
    der()
    {
        // base :: base(); compiler add explicitly
        cout << "Derived class constructor" << endl;
    }
};
int main()
{
    der d;
    return 0;
}