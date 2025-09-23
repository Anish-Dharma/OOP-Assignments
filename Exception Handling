#include <iostream>
using namespace std;

class exe{
    double x, y;  

public:
    void accept(){
        cout << "Enter First number: ";
        cin >> x;
        cout << "Enter Second number: ";
        cin >> y;
    }

    void division(){
        if (y == 0)
        {
            throw y;
        }
        cout << "Result: "<< x/y << endl;  
       
    }
};

int main(){
    exe obj; 

    obj.accept();

    try{
      obj.division();
    }
    catch (double){
        cout<<"Cannot divide by 0!"<< endl;
    }

    return 0;
}
