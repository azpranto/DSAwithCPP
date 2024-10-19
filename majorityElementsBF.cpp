//the idea is, if the frequincy of a number is more than n/2, then that will be the majority element of an array/vector
// we assume that the given array will always have a majority element

#include <iostream>
#include <vector>

using namespace std;

int MEfunc(vector<int> vec, int sz) {
    for(int val : vec) {
        int freq = 0;
        for(int el : vec) {
            if(el == val) {
                freq += 1;
                
            }
            if( freq > sz/2) {
                return val;
            }
        }
    }
    
    return{};
}

int main() {
    vector<int> vec = {1, 2, 1, 3, 2, 2, 3, 2, 2};
    int sz = vec.size();

    int ans = MEfunc(vec, sz);

    cout << ans << endl;

    return 0;
}