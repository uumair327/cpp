// Overloading Insertion and Extraction Operator in C++
#include <iostream>
using namespace std;

class stu
{
    int roll;
    char name[20];

public:
    friend void operator>>(istream &in, stu &s)
    {
        cout << "Enter Name: ";
        in >> s.name;
        cout << "Enter Roll: ";
        in >> s.roll;
    }
    friend void operator<<(ostream &out, stu &s)
    {
        out << "Nmae: " << s.name << endl;
        out << "Roll: " << s.roll << endl;
    }
};

int main()
{
    stu s;
    cin >> s;
    cout << s;
}