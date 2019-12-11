// Write a c++ program to search a given element in a array using binary search method.

#include <iostream>
#include <iomanip>

class BinarySearch {
    private: 
        int n, a[100], i, ele, loc = -1;
    public: 
        void inputData();
        void search();
        void display();
};

void BinarySearch::inputData() {

    std::cout<<"Enter the size of the array = ";
    std::cin>>n;
    std::cout<<"Enter the elements into the array = \n";
    for (i = 0; i < n; i++) 
    std::cin>>a[i];
    std::cout<<"Enter the element to be searched = ";
    std::cin>>ele;

}

void BinarySearch::search() {

    int high, low, mid;
    high = n - 1;
    low = 0; 
    while (low <= high) {
        mid = (low + high) / 2;
        if (ele == a[mid]) {
            loc = mid;
            break;
        } else if (ele < a[mid]) {
            high = mid - 1 ;
        } else {
            low = mid + 1;
        }
    }

}

void BinarySearch::display() {

    if (loc == -1) {
        std::printf("Element %d not found\n", ele);
    } else {
    std::printf("Element is found at the location = %d\n", loc + 1);
    }

}

int main() {

    BinarySearch Bs;
    Bs.inputData();
    Bs.search();
    Bs.display();
    getchar();
    return 0;

};