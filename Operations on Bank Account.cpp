#include <iostream>
#include <string>
using namespace std;

class bank_account {
private:
    string name, atype;
    int account_no;
    float balance;
    
public:
    bank_account(string n, string at, int anum, float b) {
        name = n;
        atype = at;
        account_no = anum;
        balance = b;
    }

    void display();
    void deposit();
    void withdraw();
};

void bank_account::display() {
    cout << "----------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Account Number: " << account_no << endl;
    cout << "Account Type: " << atype << endl;
    cout << "Bank Balance: " << balance << endl;
    cout << "----------------------" << endl;
}

void bank_account::deposit() {
    float dep_amt;
    cout << "Enter amount to deposit: ";
    cin >> dep_amt;
    balance += dep_amt;
}

void bank_account::withdraw() {
    float wit_amt;
    cout << "Enter amount to withdraw: ";
    cin >> wit_amt;
    if (wit_amt < balance) {
        balance -= wit_amt;
    } else {
        cout << "\nNot enough balance." << endl;
    }
}

int main() {
    int choice;
    string name1, atype1;
    int account_no1;
    float balance1;

    cout << "Enter the name: ";
    cin >> name1;
    cout << "Enter the account type: ";
    cin >> atype1;
    cout << "Enter the account number: ";
    cin >> account_no1;
    cout << "Enter the bank balance: ";
    cin >> balance1;

    bank_account obj1(name1, atype1, account_no1, balance1);

    do {
        cout << "\nPress 0 to display account, 1 to deposit amount, 2 to withdraw amount, 3 to exit:" << endl;
        cin >> choice;

        switch (choice) {
            case 0:
                obj1.display();
                break;
            case 1:
                obj1.deposit();
                obj1.display();
                break;
            case 2:
                obj1.withdraw();
                obj1.display();
                break;
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}
