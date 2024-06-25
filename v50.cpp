#include <iostream>
using namespace std;
class baseclass
{
private:
    int a;

public:
    int b;

protected:
    int c;
};
// all members of baseclass are public and protected in dev1
class dev1 : public baseclass
{
};
// all members of baseclass are private
class dev2 : private baseclass
{
};

int main()
{
    dev1 d1;
    dev2 d2;
    d1.b = 10;
    // d2.b = 10; //error
    return 0;
}