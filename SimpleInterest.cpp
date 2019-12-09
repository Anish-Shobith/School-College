/*
C++ program to create a class with data members principle, time and rate.
Create member functions to accept data values, to compute simple interest and to
display the result.
*/ 

#include <iostream>
#include <iomanip>

class SimpleInterest {
    private: 
        float p, t, r, si;
    public: 
        void inputData();
        void compute();
        void display();
};

void SimpleInterest::inputData() {
    std::cout<<"Input the principle ammount = ";
    std::cin>>p;
    std::cout<<"Input the time  = ";
    std::cin>>t;
    std::cout<<"Input the years = ";
    std::cin>>r;
}

void SimpleInterest::compute() {
    si = (p * t * r) / 100;
}

void SimpleInterest::display() {
    std::printf("The simple interest is  = %f\n", si);
}

int main() {

    SimpleInterest Si;
    Si.inputData();
    Si.compute();
    Si.display();
    getchar();
    return 0;

};