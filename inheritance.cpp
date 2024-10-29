#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "Parent Constructor" << endl;
    }

    ~Person()
    {
        cout << "Parent destructor" << endl;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student()
    {
        cout << "Child Constructor" << endl;
    }

    ~Student()
    {
        cout << "Child destructor" << endl;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Swayam";
    s1.age = 21;
    s1.rollno = 65;
    s1.getInfo();

    return 0;
}