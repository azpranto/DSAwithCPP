// given vector has bunch of duplicates in it but only a single number to find it out


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {4,1,3,2,1,2,3};

    int ans = 0;

    for(int val : vec) {
        ans = ans ^ val;
    }

    cout << ans << endl;
}

// ---------- Notable theory -----------
// bitwise operator: XOR / ^
// n ^ n = 0
// n ^ 0 = n