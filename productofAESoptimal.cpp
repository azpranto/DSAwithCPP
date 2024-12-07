//time complexcity O(n)
#include <iostream>
#include <vector>

using namespace std;







vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    for(int i = 1; i < n; i++) {
        ans[i] *= ans[i-1] * nums[i-1];
    }
    int suff = 1;
    for(int i = n-2; i >= 0; i--) {
        suff *= nums[i+1];
        ans[i] *= suff;
    }

    return ans;
}


int main() {
    vector<int> nums ={ 1, 2, 3, 4};
    
    for(int i : productExceptSelf(nums) ) {
        cout << i << endl;
    }
}