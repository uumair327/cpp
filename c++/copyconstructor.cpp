#include<iostream>
#include<conio.h>
using namespace std;
class sample{
    int a, b;
    public:
    sample(int a, int b){
        (*this).a = a;
        (*this).b = b;
    }
    sample(sample &s){
        a = s.a;
        b = s.b;
    }
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
void main(){
    sample s1(10, 20);
    sample s2(s1);
    s1.display();
    s2.display();
    getch();
}