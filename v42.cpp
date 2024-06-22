#include <iostream>
using namespace std;
class Test
{
public:
    static void read(int x, int y)
    {
        if (x > y)
        {
            cout << "X is bigger \n";
        }
        else if (y > x)
        {
            cout << "Y is bigger \n";
        }
        else
        {
            cout << "X and y are equal \n";
        }
    }
};
int main()
{
    Test T1;
    T1.read(2, 3);
    Test ::read(20, 33);
    Test ::read(5, 5);
}