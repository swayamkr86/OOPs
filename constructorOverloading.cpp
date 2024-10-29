#include <bits/stdc++.h>
using namespace std;

class Teacher
{
public:
    string name;
    Teacher()
    {
        cout << "Non parameterized\n";
    }

    Teacher(string name)
    {
        this->name = name;
        cout << "parameterized\n";
    }
};

int main()
{
    Teacher t1;           // constructor call
    Teacher t2("Swayam"); // constructor call

    return 0;
}