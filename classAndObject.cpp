#include <bits/stdc++.h>
using namespace std;

// Objects are entities in the real world
// Class is like a blueprint of the entities

class Teacher
{
    // Example of Encapsulation (data/properties + member function)
private:
    // Default --> private
    double salary; // data hiding

public:
    // properties or attributes
    string name;
    string dept;
    string subject;

    // method or member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // Setter
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1; // constructor call (Automatically created)
    t1.name = "Swayam";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}