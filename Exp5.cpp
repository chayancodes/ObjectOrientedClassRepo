// Objective: Develop a program to demonstrate the role of constructors and destructors in object creation and destruction.

#include <iostream>
using namespace std;

class Demo{
    string name;
    public:
        Demo(){
            name="Default";
            cout<<"Default Constructor\n";
        }
        Demo(string n){
            name=n;
            cout<<"Parametrized Constructor\n";
        }
        Demo(const Demo &d){
            name=d.name+"_copy";
            cout<<"Copy Constructor\n";
        }
        ~Demo(){
            cout<<"Destructor Called for "<<name<<endl;
        }
};
int main() {
    cout << "Start of main()\n";
    Demo d1;
    Demo d2("Object2");
    Demo d3 = d2;
    cout << "\nEnd of main()\n";
    return 0;
}
