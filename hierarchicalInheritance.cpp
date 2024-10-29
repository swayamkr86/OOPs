#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollno;
};

class GradStudent : public Person
{
public:
    string researchArea;
};

int main()
{
    GradStudent g1;
    Student s1;
    g1.name = "Swayam";
    s1.age = 65;

    cout << g1.name << endl;
    cout << s1.age << endl;

    return 0;
}