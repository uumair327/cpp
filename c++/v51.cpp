#include <iostream>
using namespace std;

class stu
{
    int id;
    char name[20];

public:
    void getdata()
    {
        cout << "Enter id and name: ";
        cin >> id >> name;
    }
    void putdata()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class phy : private stu
{
    float h, w;

public:
    void getphy()
    {
        getdata();
        cout << "Enter height and weight: ";
        cin >> h >> w;
    }
    void putphy()
    {
        putdata();
        cout << "Height: " << h << endl;
        cout << "Weight: " << w << endl;
    }
};

int main()
{
    phy p;
    p.getphy();
    p.putphy();
    return 0;
}