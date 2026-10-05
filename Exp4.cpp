//Objective: Design a Student class to store student details, calculate marks, percentage, and grade, and display the results.
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks[5];
    float total, percentage;
    char grade;
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks in 5 subjects (out of 100): ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        };
    }
    void calculate() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        };
        percentage = total / 5;
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 75) {
            grade = 'B';
        } else if (percentage >= 60) {
            grade = 'C';
        } else if (percentage >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        };
    }
    void display() {
        cout << "\n----- STUDENT REPORT -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total: " << total << " / 500\n";
        cout << "Percentage: " << percentage << " %\n";
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}
