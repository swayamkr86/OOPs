#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) {
        width = w;
    }
    
    // Friend class declaration
    friend class BoxInspector;
    
    // Friend function declaration
    friend void printWidth(Box b);

};


// Friend class definition
class BoxInspector {
public:
    void showWidth(Box b) {
        // Can directly access private member because it's a friend class
        cout << "Width of box (using friend class): " << b.width << endl;
    }
};

// Friend function definition
void printWidth(Box b) {
    cout << "Width of box (using friend function): " << b.width << endl;
}


int main() {
    Box box1(15);
    
    // Using friend class
    BoxInspector inspector;
    inspector.showWidth(box1);
    
    // Calling friend function
    printWidth(box1);


    return 0;
}
