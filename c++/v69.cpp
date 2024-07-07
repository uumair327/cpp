// upto terbo C++ 3.0 there is no Exception Handling
// 4.5 C++ we have only Exception Handling Message
/*Three Types of Key Word in Exception Handling
1. try
2. throw
3. catch
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    try
    {
        cout << "Enter Divdend and Divider: ";
        cin >> a >> b;
        if (b == 0)
            throw 0;
        cout << "Result: " << a / b << endl;
    }
    catch (int x)
    {
        cout << "Division by Zero" << endl;
    }
}