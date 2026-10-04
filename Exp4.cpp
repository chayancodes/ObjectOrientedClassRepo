//Objective: Design a Student class to store student details, calculate marks, percentage, and grade, and display the results.
#include <iostream>
#include <vector>
using namespace std;

class Student{
    string name;
    int rollno;
    vector<float> marks[5];
    float total, percentage;
    char grade;
    public:
        void input(){
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter roll number:";
            cin>>rollno;
            
        }

};