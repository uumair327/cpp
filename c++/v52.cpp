#include <iostream>
using namespace std;

class stu
{
protected:
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
}; // class stu

class marks
{
protected:
    int m1, m2, m3;

public:
    void getmarks()
    {
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    void putmarks()
    {
        cout << "Marks in 3 subjects: " << m1 << " " << m2 << " " << m3 << endl;
    }
}; // class marks

class result : public stu, public marks
{
    int total;
    float avg;

public:
    void display()
    {
        total = m1 + m2 + m3;
        avg = total / 3.0;
        cout << "Total: " << total << endl;
        cout << "Average: " << avg << endl;
    }
};

int main()
{
    result r;
    r.getdata();
    r.putdata();
    r.getmarks();
    r.putmarks();
    r.display();
    return 0;
}