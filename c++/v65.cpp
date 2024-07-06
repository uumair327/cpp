#include <iostream>
#include <string.h>

using namespace std;
template <class t1, class t2>
float sum(t1 a, t2 b)
{
    return a + b;
}
int main()
{
    cout << "Int Sum: " << sum(1, 2) << endl;
    cout << "Float Sum: " << sum(1.1, 2.2) << endl;
    // cout << "String Sum: " << sum("Hello ", "World") << endl;
    return 0;
}