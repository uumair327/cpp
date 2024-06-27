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
class sports
{
protected:
    int spmarks;

public:
    void getspmarks()
    {
        cout << "Enter sports marks: ";
        cin >> spmarks;
    }
};
class marks : public stu
{
protected:
    int m, p, c;

public:
    void getmarks()
    {
        cout << "Enter marks in 3 subjects: ";
        cin >> m >> p >> c;
    }
    void putmarks()
    {
        cout << "Marks in 3 subjects: " << m << " " << p << " " << c << endl;
    }
};
class result : public marks, public sports
{
    int tot;
    float avg;

public:
    void display()
    {
        tot = m + p + c;
        avg = tot / 3.0;
        cout << "Total: " << tot << endl;
        cout << "Average: " << avg << endl;
        cout << "Avg + SPmarks: " << avg + spmarks << endl;
    }
};

int main()
{
    result r;
    r.getdata();
    r.getmarks();
    r.getspmarks();
    r.display();
    return 0;
}