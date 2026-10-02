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

vector<double> choicerun(){
    double a,b;
    cout<<"Enter Number 1:";
    cin>>a;
    cout<<"Enter Number 2:";
    cin>>b;
    vector<double> result = {a,b};
    return result;
};

int main() {
    int choice;
    vector<double> re;
    double result;

    while (true) {
        displaymenu();
        cin>>choice;
        switch (choice) {
            case 1:
                cout<<"Addition Selected"<<endl;
                re=choicerun();
                result=add(re[0],re[1]);
                cout<<"Answer is:"<<result<<endl;
                break;
            case 2:
                cout<<"Subtraction Selected"<<endl;
                re=choicerun();
                result=sub(re[0],re[1]);
                cout<<"Answer is:"<<result<<endl;
                break;
            case 3:
                cout<<"Multiplication Selected"<<endl;
                re=choicerun();
                result=mult(re[0],re[1]);
                cout<<"Answer is:"<<result<<endl;
                break;
            case 4:
                cout<<"Division Selected"<<endl;
                re=choicerun();
                if (re[1]==0) {
                    cout<<"Invalid second input"<<endl;
                } else {
                    result=divy(re[0],re[1]);
                    cout<<"Answer is:"<<result<<endl;
                    }
                break;
            case 5:
                cout<<"Shutting program down"<<endl;
                return 0;
            default:
                cout<<"Invalid Choice, please try again";
                break;
        }
    }
}