/*
C++ program to create class with data members a,b,c and member functions to input data and compute
the discriminate based on the following conditons and to print the roots are equal and there value.
1) If discriminate = 0 , print the roots are equal and their value.
2) If discriminate > 0 , print the roots are real roots and their value.
3) If discriminate < 0 , print the roots are imaginary roots and their value.
*/ 

#include <iostream>
#include <iomanip>
#include <math.h>

class Quadratic {
    private: 
        float a, b, c, disc, r1, r2;
    public: 
        void inputData();
        void compute();
        void display();
};

void Quadratic::inputData() {
    std::cout<<"Enter the value for a = ";
    std::cin>>a;
    std::cout<<"Enter the value for b = ";
    std::cin>>b;
    std::cout<<"Enter the value for c = ";
    std::cin>>c;
}

void Quadratic::compute() {

    disc = (b * b) - (4 * a * c);

    if (disc == 0) {
        
        std::cout<<"Roots are equal!"<<std::endl;
        r1 = -b / (2 * a);
        r2 = r1;

    } else if (disc > 0) {

        std::cout<<"Roots are real and distinct!"<<std::endl;
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);

    } else {

        std::cout<<"The roots are imaginary roots!"<<std::endl;
        exit(0);

    }
}

void Quadratic::display() {
    std::printf("The first root is = %f\nThe seconds root is = %f\n", r1, r2);
}

int main() {

    Quadratic Q;
    Q.inputData();
    Q.compute();
    Q.display();
    getchar();
    return 0;

};