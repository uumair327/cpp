#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Test
{

    char st[100];

public:
    void read()
    {
        cin >> st;
    }
    void show()
    {
        cout << st;
    }

    Test operator+(Test t)
    {
        Test temp;
        strcpy(temp.st, st);
        strcat(temp.st, " ");
        strcat(temp.st, t.st);
        return temp;
    }
};
int main()
{
    Test t1, t2, t3;
    cout << "Enter 1st string: ";
    t1.read();
    cout << "Enter 2nd string: ";
    t2.read();
    t3 = t1 + t2;
    cout << "Concatenated string: ";
    t3.show();
    return 0;
}