//we assume that arr is already sorted and all ele has a pair except 1
//we need to keep time complexcity O(logn), so linear search wont do

#include <iostream>
#include <vector>

using namespace std;

int singleEle(vector<int> vec) {
    int n = vec.size();

    if(n == 1) return vec[0];

    int st = 0, end = n-1;

    while(st <= end) {
        int mid = st + (end - st)/2;

        if(mid == 0 && vec[mid] != vec[1]) return vec[mid];
        if(mid == n-1 && vec[mid] != vec[n-2]) return vec[mid];
        
        if(vec[mid] != vec[mid-1] && vec[mid] != vec[mid+1]) return vec[mid];

        if(mid%2 == 0) {
            if(vec[mid] == vec[mid-1]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if(vec[mid] == vec[mid+1]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
    }

    return -1;
}


int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7};
    cout << singleEle(arr) <<endl;
    return 0;
}