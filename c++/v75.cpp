#include <iostream>
#include <fstream>
using namespace std;

class acc
{
public:
    int accno;
    char name[20];
    float bal;
    void getdata()
    {
        cout << "Enter Account Number: ";
        cin >> accno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> bal;
    }
    void putdata()
    {
        cout << "Account Number: " << accno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << bal << endl;
    }
};
int main()
{
    acc a;
    a.getdata();
    a.putdata();
    fstream file;
    file.open("acc.dat", ios::out | ios::binary);
    file.write((char *)&a, sizeof(a));
    file.close();
    file.open("acc.dat", ios::in | ios::binary);
    file.read((char *)&a, sizeof(a));
    file.close();
    a.putdata();
}
