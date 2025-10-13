/*PROBLEM STATEMENT: Develop a system that defines inventory class with suitable
data members and member functions. Perform read and write operations using class
objects.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class inventory{
	public:
	string name;
	int id, quantity;
	double price;
	
	void input(){
		cout<<"Enter item name:  ";
		cin>>name;
		cout<<"Enter item id: ";
		cin >>id;
		cout<<"Enter number of items: ";
		cin>>quantity;
		cout<<"Enter price: ";
		cin>>price;
		}
	
	void display(){
		cout<<"---Item Details---"<<endl;
		cout<<"Item name: "<<name<<endl;
		cout<<"Item id: "<<id<<endl;
		cout<<"Number of item: "<<quantity<<endl;
		cout<<"Item price: "<<price<<endl;
		}
	
	};

int main(){
	ofstream fout;
	inventory item[5];
	fout.open("File.txt",ios::out | ios::app);
	for(int i=0; i<5; i++){
		cout<<"\n\nEnter details for item "<<i+1<<endl;
		item[i].input();
		fout<<item[i].name<<" "<<item[i].id<<" "<<item[i].quantity<<" "<<item[i].price<<endl;
	}
	fout.close();
	
	ifstream fin;
	fin.open("File.txt",ios::in);
	for(int i =0; i<5; i++){
		cout<<"\n\nDetails for item "<<i+1<<endl;
		item[i].display();
	}
	fin.close();
	return 0;
	}
