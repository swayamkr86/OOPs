#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    // Example of Encapsulation (data/properties + member function)
private:
    // Default --> private
    double salary; // data hiding

public:
    string name;
    string dept;
    string subject;
    int *gpa; // pointer

    // Constructor overloading
    //  Non-parameterized constructor
    Teacher() // Always Public
    {
        cout << "Hii, I am constructor\n";
        dept = "CSE";
    }

    Teacher(string name, string dept, string subject, double salary) // Parameterized constructor
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(Teacher &orgObj) // custom Copy constructor
    {
        cout << "I am a custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // method or member functions
    void study()
    {
        // this pointer jis object ki abhi baat ho rahi h usko point kar raha hai
        // Is class ke particular object ko dikhane ke liye
        cout << this->name << "Studying" << endl;
    }

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

    void getInfo()
    {
        cout << name << endl;
        cout << dept << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

int main()
{
    Teacher t1; // constructor call
    Teacher t2("Tanishk", "ECE", "Python", 25000);
    Teacher t3(t2); // Default copy constructor invoke
    t2.getInfo();
    t3.getInfo();
    t1.name = "Swayam";
    t1.subject = "C++";

    cout << t1.dept << endl;

    // Dynamic allocation, or Teacher pointer;
    Teacher *T = new Teacher("Utkarsh", "CSE", "Javascript", 37000);
    cout<< T->name << endl;
    cout<< T->dept << endl;
    T->study();
    delete T;

    return 0;
}
