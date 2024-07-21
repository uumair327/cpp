#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main()
{
    //creation of map
    unordered_map<string, int> m;
    //insertion of elements
    //1
    pair<string, int> p =  make_pair("abc", 1);
    m.insert(p);
    //2
    pair<string, int> p1("def", 2);
    m.insert(p1);
    //3
    m["ghi"] = 3;


}