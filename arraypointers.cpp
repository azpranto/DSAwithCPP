#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 4, 5};

    cout << "address of arr: " << arr << endl; // array itself is a pointer which has a location and it always points 0th index element. the address is basically the address of the 0th value location
    cout << "value of 0th index of arr: " << *arr << endl;

    return 0;
}