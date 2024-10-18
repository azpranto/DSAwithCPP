//maximum subarray sum with kadane's algorithm
//the idea is if currsum becomes <0 that means the previous values can never be the maximum sum

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {-4, -7, 6, 5, 0, -1, 9, -6, 5};
    int maxSum = INT_MIN, currSum = 0;

        for(int val : nums) {
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum < 0) {
                currSum = 0;
            }
        }
        
        cout << maxSum << endl;

        return 0;
}