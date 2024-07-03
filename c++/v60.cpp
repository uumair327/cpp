#include <iostream>
#include <string.h>

using namespace std;

class s
{
protected:
    int d1, d2;

public:
    void getdim()
    {
        cout << "Enter the dimensions of the shape: ";
        cin >> d1 >> d2;
    }
    virtual float area() = 0;
};

class tri : public s
{
public:
    float area()
    {
        return 0.5 * d1 * d2;
    }
};
class squ : public s
{
public:
    float area()
    {
        return d1 * d2;
    }
};

int main()
{
    tri t;
    squ s;
    cout << "Enter lenght and Breadth of the Triangle\n";
    t.getdim();
    cout << "Area of the Triangle is " << t.area() << endl;
    cout << "Enter lenght of the Square\n";
    s.getdim();
    cout << "Area of the Square is " << s.area() << endl;
}