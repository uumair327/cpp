#include <iostream>
#include <string.h>

using namespace std;

class stu
{
private:
    char name[20];
    char course[20];

public:
    stu() {}
    stu(char name[20], char course[20])
    {
        strcpy(this->name, name);
        strcpy(this->course, course);
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

class marks : public stu
{
    int m1, m2, m3;

public:
    marks(char name[20], char course[20], int m1, int m2, int m3) : stu(name, course)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }

    void showmarks()
    {
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << endl;
    }
};

int main()
{
    marks m("John", "C++", 90, 80, 70);
    m.display();
    m.showmarks();
    return 0;
}