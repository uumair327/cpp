/* local class
local class declared inside function
it can't contain static variables
but can contain static functions
it can access all members of the enclosing class
it can't access non-static members of the enclosing class
*/

#include <iostream>
#include <string.h>

using namespace std;

int x = 200;
void fun()
{
    class Test
    {
        int x;

    public:
        void show()
        {
            x = 100;
            cout << "x = " << x << endl;
            cout << "x = " << ::x << endl;
        }
    };
    Test t;
    t.show();
}

int main()
{
    fun();
    return 0;
}
