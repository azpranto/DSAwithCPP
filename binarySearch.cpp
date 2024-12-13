// we'll assume that our given array is already sorted

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int tar) {
    int st = 0, end = arr.size()-1;

    while( st <= end ) {
        int mid = (st+end)/2;  // more optimised: mid = st + (end-st)/2;  // this is for worst case, which is INT_MAX  (we can't add more values after INT_MAX)

        if(tar > arr[mid]) {
            st = mid + 1;
        } else if( tar < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12}; //odd
    int tar = 12;

    cout << binarySearch(arr, tar) << endl;

    vector<int> arr2 = {-1, 0, 4, 5, 9, 12}; // even
    int tar2 = 0;

    cout << binarySearch(arr2, tar2) << endl;


    return 0;
}