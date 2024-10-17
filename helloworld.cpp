#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(6);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << "chomu" << endl;
    return 0;
}