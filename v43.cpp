#include <iostream>

using namespace std;
class Test
{
    float p;
    int t;
    const float r;

public:
    Test() : r(2.5)
    {
    }
    void read(float p, int t)
    {
        this->p = p;
        this->t = t;
    }
    float show()
    {
        return p * t * r / 100;
    }
};
int main()
{
    Test T1;
    T1.read(1000, 10);
    cout << "Int =" << T1.show();
}