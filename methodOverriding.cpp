#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent class\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class\n";
    }
};

int main()
{
    Parent p1;
    Child c1;
    p1.getInfo();
    c1.getInfo();

    return 0;
}