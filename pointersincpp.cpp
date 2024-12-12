#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a = 20;
    cout << "address of a: " << &a << endl;   // &+(var) prints the addresss or a variable

    int* ptr = &a;        // (int+*) stores address of a veriable. ptr also has its own address. it is stored in a different location. it is called pointer
    cout << "address of a: " << ptr << endl;
    cout << "address of ptr: " << &ptr << endl;

    //same with other data types

    float b = 69.96f;
    float* ptr2 = &b;

    cout << "address of b: " << ptr2 << endl;
    cout << "address of ptr2: " << &ptr2 << endl;

    //pointer to pointer

    int** prtptr = &ptr;    // (int*+*) stores address of a pointer. here prtptr is also a pointer which has a address of it's own
    cout << "address of ptr: " << prtptr << endl;
    cout << "address of prtptr: " << &prtptr << endl;

    // * is also called dereference operator which turns a value into address and a address into it's value

    cout << "value of &a before dereference: " << (&a) << endl;
    cout << "value of &a after dereference: " << *(&a) << endl;
    cout << "value of ptr after dereference: " << *(ptr) << endl;
    cout << "value of prtptr after dereference: " << *(prtptr) << endl;   //which prints the address a which was stored in ptr already
    cout << "value of prtptr after dereferencing the dereference: " << **(prtptr) << endl;   //which prints value of a of which address was stored in ptr already

    //there is also a pointer called null

    int* ptrN = NULL; // A pointer that doesn't point to any location
    int** prtptrN = NULL;

    //cout << *ptrN << endl; // we can't dereference null pointer, it'll show a error
    

    return 0;
}
