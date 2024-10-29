#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int x = 0;
    static int y = 0;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    x++;
    y++;
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}