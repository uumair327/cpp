// template type class
#include <iostream>
using namespace std;

template <class t>
class Test
{
    t a, b;

public:
    void get()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }
    t sum();
};

template <class t>
t Test<t>::sum()
{
    return a + b;
}

int main()
{
    Test<int> t1;
    Test<float> t2;
    t1.get();
    cout << "Sum: " << t1.sum() << endl;
    t2.get();
    cout << "Sum: " << t2.sum() << endl;
    return 0;
}