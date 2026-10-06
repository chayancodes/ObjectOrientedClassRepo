//Objective: Design an Employee class using private data members and public member functions to implement data hiding.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:                    
    int id;
    string name;
    double salary;
public:
    void setId(int i) { id = i; }
    void setName(string n) { name = n; }
    void setSalary(double s) {
        if (s < 0) {
            cout << "Invalid salary! Value not changed.\n";
            return;
        }
        salary = s;
    }
    int getId() { return id; }
    string getName() { return name; }
    double getSalary() { return salary; }
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.setId(501);
    e.setName("Riya");
    e.setSalary(45000);
    e.display();

    cout << "\nTrying to set a negative salary:\n";
    e.setSalary(-100);
    cout << "\nUpdating salary through the public function:\n";
    e.setSalary(52000);
    cout << "Name: " << e.getName() << ", New salary: " << e.getSalary() << endl;
    return 0;
}
