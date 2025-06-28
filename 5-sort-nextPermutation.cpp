//brute force will be discussed in recurrsion section which has TC O(n!) SC O(n)
// this is the optimal solution with TC O(n) SC O(1)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 6, 5, 4};
    
    int n = nums.size();

    int pivot = -1;

    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }

    if(pivot == -1) {
        reverse(nums.begin(), nums.end()); // if no pivot found, reverse the entire array,
        for(int num : nums) {
            cout << num << " ";
        } 
        return 0;
    }

    for(int i = n - 1; i > pivot; i--) {
        if(nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // alt idea of the below code (shorter version) >>
    // >> reverse(nums.begin() + pivot + 1, nums.end());

    int i = pivot + 1, j = n - 1;
    while(i < j) {
        swap(nums[i++], nums[j--]);
    }

    for(int num : nums) {
        cout << num << " ";
    }

    return 0;
}