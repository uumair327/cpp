#include <iostream>
#include <string.h>

using namespace std;

class c1
{
public:
    void c1f1()
    {
        cout << "c1f1" << endl;
    }
};

class c2 : public virtual c1
{
public:
    void c2f1()
    {
        cout << "c2f1" << endl;
    }
};
class c3 : public virtual c1
{
public:
    void c3f1()
    {
        cout << "c3f1" << endl;
    }
};

class c4 : public c2, public c3
{
public:
    void c4f1()
    {
        cout << "c4f1" << endl;
    }
};
int main()
{
    c4 obj;
    obj.c1f1();
    obj.c2f1();
    obj.c3f1();
    obj.c4f1();
    return 0;
}