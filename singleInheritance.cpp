#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
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

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
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
    Student s1("Swayam", 21, 65);
    s1.getInfo();

    return 0;
}