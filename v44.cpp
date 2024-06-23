/*operator which can't be overloaded
::
., .*
sizeof()
conditional ?:
*/
#include <iostream>
using namespace std;

class Test1
{
    int a;

public:
    void geta()
    {
        cin >> a;
    }
    void operator==(Test1 t2)
    {
        if (a == t2.a)
            cout << "a is equal";
        else
            cout << "a is not equal";
    }
};
int main()
{
    Test1 t1, t2;
    cout << "Enter 1st obj ";
    t1.geta();
    cout << "Enter 2st obj ";
    t2.geta();
    t1 == t2;
    return 0;
}