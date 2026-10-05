// Objective: Develop a program to calculate employee salary using functions with default arguments for allowances and deductions.

#include <iostream>
using namespace std;

double calculateSalary(double basic, double hraPct = 20, double daPct = 10, double pfPct = 12, double taxPct = 5) {
    double allowances = basic * (hraPct + daPct) / 100;
    double deductions = basic * (pfPct + taxPct) / 100;
    return basic + allowances - deductions;
}

int main() {
    cout << "Employee 1 (all defaults), basic = 30000\n";
    cout << "Net salary = " << calculateSalary(30000) << "\n\n";
    cout << "Employee 2 (HRA = 25%), basic = 40000\n";
    cout << "Net salary = " << calculateSalary(40000, 25) << "\n\n";
    cout << "Employee 3 (HRA = 25%, DA = 15%), basic = 50000\n";
    cout << "Net salary = " << calculateSalary(50000, 25, 15) << "\n\n";
    cout << "Employee 4 (HRA=30%, DA=20%, PF = 10%, Tax = 5%), basic = 60000\n";
    cout << "Net salary = " << calculateSalary(60000, 30, 20, 10, 8) << endl;
    return 0;
}
