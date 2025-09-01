#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name, dept, date, addr;
    int id;
    string tel;
    static int count;

public:
    // Default constructor
    Employee() {
        cout << "\nEnter Employee Details:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Employee ID: ";
        cin >> id;
        cout << "Department: ";
        cin >> dept;
        cout << "Date of Joining (dd/mm/yyyy): ";
        cin >> date;
        cout << "Permanent Address: ";
        cin >> addr;
        cout << "Telephone Number: ";
        cin >> tel;
        
        cout<<"(Default constructor)"<<endl;
        cout << "Pointer: " << this << endl;
        count++;
    }

    // Parameterized constructor
    Employee(string n, int i, string d, string doj, string a, string t) {
        name = n;
        id = i;
        dept = d;
        date = doj;
        addr = a;
        tel = t;
        
         cout<<"(Parameterized constructor)"<<endl;
        cout << "Pointer: " << this << endl;
        count++;
    }

    // Copy constructor
    Employee(const Employee &e) {
        name = e.name;
        id = e.id;
        dept = e.dept;
        date = e.date;
        addr = e.addr;
        tel = e.tel;
        
        cout<<"(Copy constructor)"<<endl;
        cout << "Pointer: " << this << endl;
        count++;
    }

    // Destructor
    ~Employee() {
        cout << "\nDeleted Employee " << count;
        count--;
    }

    // Inline member function
    void dispdetails() {
        cout << "\nEmployee Details:\n";
        cout << "Pointer (this): " << this << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Department: " << dept << endl;
        cout << "Date of Joining: " << date << endl;
        cout << "Permanent Address: " << addr << endl;
        cout << "Telephone Number: " << tel << endl;
    }

    // Inline static function
    static void dispcount() {
        cout << "\nNumber of Employees: " << count << endl;
    }
};

int Employee::count = 0;

int main() {
    
    Employee* e1 = new Employee();
    e1->dispdetails();
    Employee::dispcount();

    Employee* e2 = new Employee("Anish", 101, "CSE", "01/08/2020", "Pune", "9876543210"); // Parameterized
    e2->dispdetails();
    Employee::dispcount();

    Employee* e3 = new Employee(*e2);
    e3->dispdetails();
    Employee::dispcount();

    delete e1;
    delete e2;
    delete e3;

    return 0;
}

