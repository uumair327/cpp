#include<iostream>
using namespace std;
class dad{
    public:
    void displaya(){
        cout<<"I am dad"<<endl;
    }
};

class child : public dad{
    public:
    void display(){
        cout<<"I am child"<<endl;
    }
};

int main(){
    child c;
    c.displaya();
}