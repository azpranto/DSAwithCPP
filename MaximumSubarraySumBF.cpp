#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 9;
    int arr[9] = {-4, -7, 6, 5, 0, -1, 9, -6, 5};
    int maxSum = 0;

    for(int st = 0; st < n; st++) {
        int currSum = 0;
        for(int end = st; end < n; end++) {

            currSum += arr[end];
            maxSum = max(currSum, maxSum);

        }
        
    }
    cout << maxSum <<endl;
}