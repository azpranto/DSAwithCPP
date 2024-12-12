#include <iostream>
#include <vector>

using namespace std;

void changeVal(int* ptr) { //recieving value into a pointer
    *ptr = 20;  // dereferencing ptr where address of a was stored. after deferencing the address of a, we get the value of a, which is changed into 20
}

int main() {
    int a = 10;
    cout << "inside main func, value of a: " << a << endl;
    
    changeVal(&a); // passing the address of a to changeVal func

    cout << "inside changeVal func which is now in main func, value of a: " << a << endl;
}