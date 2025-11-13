/*PROBLEM STATEMENT: Develop a system that defines inventory class with suitable
data members and member functions. Perform read and write operations using class
objects.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class inventory {
public:
	string name;
	int id, quantity;
	double price;

	void input() {
		cout << "Enter item name: ";
		cin >> name;
		cout << "Enter item id: ";
		cin >> id;
		cout << "Enter item price: ";
		cin >> price;
		cout << "Enter number of items: ";
		cin >> quantity;
		cout << endl;
	}

	void display() {
		cout << "---Item Details---" << endl;
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
		cout << "Price: " << price << endl;
		cout << "Quantity: " << quantity << endl;
		cout << endl;
	}
};

int main() {
	inventory item[5];

	ofstream fout("File.txt", ios::out);
	for (int i = 0; i < 5; i++) {
		item[i].input();
		fout << item[i].name << " " << item[i].id << " " << item[i].price << " " << item[i].quantity << endl;
	}
	fout.close();

	ifstream fin("File.txt", ios::in);
	for (int i = 0; i < 5; i++) {
		fin >> item[i].name >> item[i].id >> item[i].price >> item[i].quantity;
		cout << "Details for item " << i + 1 << endl;
		item[i].display();
	}
	fin.close();

	return 0;
}
