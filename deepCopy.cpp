#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    double *cgpaPtr;

    student(string name, double cgpa) // Parameterized constructor
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    student(student &Obj) // custom Copy constructor
    {
        this->name = Obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *Obj.cgpaPtr;
    }

    // destructor
    ~student()
    {
        cout << "Hi, I am destructor" << endl;
        delete cgpaPtr; // for clearing dynamic memory
    }

    void getInfo()
    {
        cout << name << endl;
        cout << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Ansh", 8.9);
    student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "Swayam";
    s2.getInfo();

    return 0;
}