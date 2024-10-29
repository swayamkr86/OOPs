#include <bits/stdc++.h>
using namespace std;

class Teacher
{
public:
    Teacher()
    {
        cout << "Constructor\n";
    }

    ~Teacher()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    if (true)
    {
        Teacher t1;
    }

    cout << "End of main function\n";

    if (true)
    {
        static Teacher t2;
    }

    cout << "End of main function\n";

    return 0;
}