// overloading Generic Function
#include <iostream>
using namespace std;

template <class t>
t sum(t a, t b)
{
    return a + b;
}
template <class t>
t sum(t a, t b, t c)
{
    return a + b + c;
}

int main()
{
    cout << "Int Sum: " << sum(1, 2) << endl;
    cout << "Float Sum: " << sum(1.1, 2.2) << endl;
    cout << "Int Sum: " << sum(1, 2, 3) << endl;
    cout << "Float Sum: " << sum(1.1, 2.2, 3.3) << endl;
    return 0;
}