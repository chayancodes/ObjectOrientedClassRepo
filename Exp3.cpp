// Objective: Implement function overloading to calculate the volume of different geometric objects such as a cube, cuboid, and cylinder.

#include <iostream>
using namespace std;
const double pi=3.14159;

double volume(double a){
    return (a*a*a);
};
double volume(double a,double b){
    return (pi*a*a*b);
};
double volume(double a, double b, double c){
    return(a*b*c);
}

int main() {
    cout<<"Volume of cube with side 4:"<<volume(4)<<endl;
    cout<<"Volume of cyllinder with radius 4 and height 5:"<<volume(4,5)<<endl;
    cout<<"Volume of cuboid with length 4, width 5 and height 6:"<<volume(4,5,6)<<endl;
    return 0;
}