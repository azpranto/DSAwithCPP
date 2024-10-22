//moore's voting algorithm
//the idea is if theres a majority element, that's power will always dominate

#include <iostream>
#include <vector>

using namespace std;


int MEfunc(vector<int> vec, int n) {
    
    int freq = 0, ans = 0;

    for( int i = 0; i < vec.size(); i++ ) {
        if(freq == 0) {
            ans = vec[i];
        }
        if(ans == vec[i]) {
            freq++;
        } else {
            freq--;
        }
    }
        
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 1, 3, 2, 2, 3, 2, 2};
    int sz = nums.size();

    int ans = MEfunc(nums, sz);

    cout << ans << endl;

    return 0;
}