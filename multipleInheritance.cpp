#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student
{
public:
    int rollno;
};

class GradStudent : public Person, public Student
{
public:
    string researchArea;
};

int main()
{
    GradStudent s1;
    s1.name = "Swayam";
    s1.rollno = 65;
    s1.researchArea = "CSE";

    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << s1.researchArea << endl;

    return 0;
}