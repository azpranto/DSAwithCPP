//brute force
//time complexcity of the vector function is O(n^2)

#include <iostream>
#include <vector>

using namespace std;

vector<int> productFunc(vector<int> nums, int n) {
    vector<int> ans(n, 1); //(size, general value for each vec[i])

    for(int i = 0; i < n; i++) {
        //int prod = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                ans[i] *= nums[j]; //prod *= nums[j]; //(this was more unoptimised)
            }
        }
        //ans[i] = prod;
    }

    return ans;
}

int main() {
    vector<int> nums ={ 1, 2, 3, 4};
    int sz = nums.size();
    
    //vector<int> ans = productFunc(nums, sz);
    
    for(int i : productFunc(nums, sz) ) {
        cout << i << endl;
    }
}