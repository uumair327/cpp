#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Testing any Exception" << endl;
        throw 1.3;
    }
    catch (...)
    {
        cout << "Catched The Thrown Value" << endl;
    }
}