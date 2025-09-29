#include <iostream>
#include <string>

using namespace std;

class Staff {
protected:
    string name, dept;
    int staffid;

public:
    void accept1() {
        cout << "\nEnter Staff details: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Department: ";
        cin >> dept;
    };

    void display1() {
        cout << "\nStaff Details:";
        cout << "\nName: " << name << endl;
        cout << "Department: " << dept << endl;
    };
};

class Teacher : public Staff {
    string role, section;

public:
    void accept2() {
        Staff::accept1();
        cout << "\nEnter Teacher details:";
        cout << "\nRole: ";
        cin >> role;
        cout << "\nSection: ";
        cin >> section;
    };

    void display2() {
        Staff::display1();
        cout << "\nTeacher Details: ";
        cout << "\nRole: " << role << endl;
        cout << "Section: " << section << endl;
    };
};

class supportStaff : public Staff {
    string areaofsupport;

public:
    void accept3() {
        Staff::accept1();
        cout << "\nEnter area of support: ";
        cin >> areaofsupport;
    };

    void display3() {
        Staff::display1();
        cout << "Area of support: " << areaofsupport << endl;
    };
};

int main() {
    int n;

    cout << "Enter number of teachers: ";
    cin >> n;
    Teacher teachers[20]; 
    for (int i = 0; i < n; i++) {
        cout << "\nTeacher " << i + 1 << ":" << endl;
        teachers[i].accept2();
    }
    cout << "\n--- Teacher Details ---" << endl;
    for (int i = 0; i < n; i++) {
        teachers[i].display2();
    }

    cout << "\nEnter number of support staff: ";
    cin >> n;
    supportStaff support[20];
    for (int i = 0; i < n; i++) {
        cout << "\nSupport Staff " << i + 1 << ":" << endl;
        support[i].accept3();
    }
    cout << "\n--- Support Staff Details ---" << endl;
    for (int i = 0; i < n; i++) {
        support[i].display3();
    }

    return 0;
}
