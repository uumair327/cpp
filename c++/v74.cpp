#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Outer Try Block" << endl;
        try
        {
            cout << "Inner Try Block" << endl;
            throw 20;
        }
        catch (int x)
        {
            cout << "Inner Catch Block" << endl;
            throw x; // throw inside another catch block
        }
    }
    catch (int y)
    {
        cout << "outer Catch Block" << endl;
    }
    return 0;
}