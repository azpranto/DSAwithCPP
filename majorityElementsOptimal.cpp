// here, the time complexity is O(nlogn)
// the idea is, sorting

#include <iostream>
#include <vector>
#include <algorithm> // where sort() is available

using namespace std;

int MEfunc(vector<int> vec, int n) {
    //sorting
    sort(vec.begin(), vec.end());

    int ans = vec[0], freq = 1;

    for( int i = 1; i < n; i++) {
        if(vec[i] == vec[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = vec[i];
        }

        if(freq > n/2) {
            return ans;
        }
    }
    
    return -1;
}

int main() {
    vector<int> vec = {1, 2, 1, 3, 2, 2, 3, 2, 2};
    int sz = vec.size();

    int ans = MEfunc(vec, sz);

    cout << ans << endl;

    return 0;
}