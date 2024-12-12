#include <iostream>
#include <vector>

using namespace std;

int main() {
    //ptr++, ++ptr, ptr--, --ptr

    int a = 20;
    int* ptr = &a;

    cout << "og ptr: " << ptr << endl;

    ptr++; // this increases 4 bytes of the og address (4 numbers of hexdec number). same with --

    cout << "updated ptr: " << ptr << endl;

    // add/subtract

    ptr = ptr + 1; // this will add to the address of ptr a value equivalent to 1 integer (1 int = 4 bytes)

    cout << "added 1int, ptr: " << ptr << endl;

    ptr = ptr + 3; // (3 int = 12 bytes)

    cout << "added 3int, ptr: " << ptr << endl;

    // same with substraction

    // array

    int arr[] = { 1, 2, 3, 4, 5};

    cout << *arr << endl; // dereference of the address of the value of 0th the index of arr
    cout << *(arr+1) << endl; // dereference of the address of the value of 1th the index of arr
    cout << *(arr+4) << endl; // dereference of the address of the value of 4th the index of arr


    //pointer + pointer is not possible. but we can substract/compare same type pointers

    int* ptr2;
    int* ptr1 = ptr2 + 2;

    cout << ptr1 - ptr2 << endl; // output should be 2. which show the number of block/s of types(here type=int) that can be placed between these pointers

    int* ptr3;
    int* ptr4;

    cout << ptr3 << endl;
    cout << ptr4 << endl;
    cout << (ptr3 < ptr4) << endl; //comparing. 1 = true, 0 = false

    // we can implement all kind of relational operators like this

    return 0;
}