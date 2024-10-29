#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    virtual void hello()
    {
        cout << "Hello form Parent\n";
    }
};

class Child : public Parent
{
public:
    void hello()
    {
        cout << "Hello form Child\n";
    }
};

int main()
{
    Parent p1;
    Child c1;
    p1.hello();
    c1.hello();

    return 0;
}