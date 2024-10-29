#include <bits/stdc++.h>
using namespace std;

class shape // abstract class
{
    virtual void draw() = 0; // pune virtual function
};

class Circle : public shape
{
public:
    void draw()
    {
        cout << "Drawing a circle\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();

    return 0;
}