/*
C++ program to find the frequency of presence of a number in an array.
*/ 

#include <iostream>
#include <iomanip>

class Frequency {
    private: 
        int n, a[100], i, ele, count;
    public: 
        void inputData();
        void find();
        void display();
};

void Frequency::inputData() {
    std::cout<<"Enter the size of the array = ";
    std::cin>>n;
    std::cout<<"Enter the elements into the array = \n";
    for (i = 0; i <= n; i++) {
        std::cin>>a[i];
    }
    std::cout<<"Enter the element to be searched = ";
    std::cin>>ele;
}

void Frequency::find() {

    count = 0;

    for (i = 0; i < n; i++) {
        if (a[i] == ele) {
            count++;
        }
    }
}

void Frequency::display() {
    if (count > 0) {
        std::printf("The frequency is = %d\n", count);
    } else {
    std::printf("Element does not exists\n");
    }
}

int main() {

    Frequency Q;
    Q.inputData();
    Q.find();
    Q.display();
    getchar();
    return 0;

};