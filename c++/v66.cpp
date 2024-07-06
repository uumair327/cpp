#include <iostream>
using namespace std;

template <class t>
t sum(t a[], int size)
{
    t s = 0;
    for (int i = 0; i < size; i++)
    {
        s += a[i];
    }
    return s;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << sum(a, 5) << endl;
    cout << sum(b, 5) << endl;
    return 0;
}