#include <bits/stdc++.h>
using namespace std;

class Teacher
{
public:
    string name;
    void show()
    {
        cout << "Non parameterized\n";
    }

    void show(string name)
    {
        this->name = name;
        cout << "parameterized\n";
    }
};

int main()
{
    Teacher t1;
    t1.show();
    t1.show("Swayam");

    return 0;
}