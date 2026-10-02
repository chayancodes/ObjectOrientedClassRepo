// Objective: Implement a menu-driven calculator using user-defined functions and demonstrate parameter passing and return values.

#include <iostream>
#include <vector>
using namespace std;

double add(double a, double b){return a+b;};
double sub(double a, double b){return a-b;};
double mult(double a, double b){return a*b;};
double divy(double a, double b){return a/b;};

void displaymenu() {
    cout<<"-------Menu Calc-------"<<endl;
    cout<<"1. Add \n2. Subtract \n3. Multiply \n4. Divide \n5. Exit\n";
    cout<<"Enter Choice:";
};

vector<int> choicerun(){
    int a,b;
    cout<<"Enter Number 1:";
    cin>>a;
    cout<<"Enter Number 2:";
    cin>>b;
    vector<int> result = {a,b};
    return result;
};

int main() {
    int choice;
    vector<int> re;
    double result;

    while (true) {
        displaymenu();
        cin>>choice;
        switch (choice) {
            case 1:
                cout<<"Addition Selected";
                re=choicerun();
                result=add(re[0],re[1]);
                cout<<"Answer is:"<<result;
                break;
            case 2:
                cout<<"Subtraction Selected";
                re=choicerun();
                result=sub(re[0],re[1]);
                cout<<"Answer is:"<<result;
                break;
            case 3:
                cout<<"Multiplication Selected";
                re=choicerun();
                result=mult(re[0],re[1]);
                cout<<"Answer is:"<<result;
                break;
            case 4:
                cout<<"Division Selected";
                re=choicerun();
                result=divy(re[0],re[1]);
                cout<<"Answer is:"<<result;
                break;
            case 5:
                cout<<"Shutting program down";
                return 0;
        }
    }
}