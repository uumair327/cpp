#include <iostream>
using namespace std;

// Forward declaration of Test2 is unnecessary since it's declared before it's used in Test1.
class Test2;

class Test1
{
    int a;

public:
    void get()
    {
        cin >> a;
    }

    // Declaration of friend operator should specify argument types exactly as in definition.
    friend void operator>(Test1 t1, Test2 t2);
};

class Test2
{
    int b;

public:
    void get()
    {
        cin >> b;
    }

    // Declaration of friend operator should specify argument types exactly as in definition.
    friend void operator>(Test1 t1, Test2 t2);
};

// Definition of operator> should match the declarations in both Test1 and Test2.
void operator>(Test1 t1, Test2 t2)
{
    // Corrected the ternary condition to properly compare and output the result.
    t1.a > t2.b ? cout << "Test1 is greater than Test2" << endl
                : (t1.a < t2.b ? cout << "Test2 is greater than Test1" << endl
                               : cout << "Test1 is equal to Test2" << endl);
}

int main()
{
    Test1 t1;
    Test2 t2;

    cout << "Enter value for Test1: ";
    t1.get();

    cout << "Enter value for Test2: ";
    t2.get();

    t1 > t2;

    return 0;
}
