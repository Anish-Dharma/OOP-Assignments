#include <iostream>

using namespace std;

class Shape {
public:
    int x, y;

    void getdata() {
        cout << "Enter the parameters of the shape" << endl;
        cout << "First parameter: ";
        cin >> x;
        cout << "Second parameter: ";
        cin >> y;
    }

    virtual void display() {}
};

class Triangle : public Shape {
public:
    void display() {
        cout << "Area of triangle is: " << (0.5) * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display() {
        cout << "Area of rectangle is: " << x * y << endl;
    }
};

int main() {
    char choice;
    cout << "Choose triangle(t) or rectangle(r): ";
    cin >> choice;

    if(choice == 't') {
        Shape* st;
        Triangle t;
        st = &t;
        st->getdata();
        st->display();  
    }
    else if(choice == 'r') {
        Shape* sr;
        Rectangle r; 
        sr = &r;
        sr->getdata();
        sr->display();
    }
    else {
        cout << "Invalid Input!" << endl;
    }

    return 0;
}
