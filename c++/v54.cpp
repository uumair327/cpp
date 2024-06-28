#include <iostream>
using namespace std;

class acc
{
    int accno;
    char name[20];

public:
    void getdata()
    {
        cout << "Enter account number, name ";
        cin >> accno >> name;
    }
};

class sav : public acc
{
    float bal;

public:
    void getbal()
    {
        cout << "Enter balance: ";
        cin >> bal;
        if (bal < 500)
            cout << "Min balance is 500";
        else
            cout << "Balance: " << bal;
    }
};

class cur : public acc
{
    float bal;

public:
    void getbal()
    {
        cout << "Enter balance: ";
        cin >> bal;
        if (bal < 1000)
            cout << "Min balance is 1000";
        else
            cout << "Balance: " << bal;
    }
};
int main()
{
    int op;
    cout << "1. Savings\n2. Current\nEnter option: ";
    cin >> op;
    if (op == 1)
    {
        sav s;
        s.getdata();
        s.getbal();
    }
    else if (op == 2)
    {
        cur c;
        c.getdata();
        c.getbal();
    }
    else
    {
        cout << "Invalid option";
    }
    return 0;
}