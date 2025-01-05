// we'll assume that our given array is already sorted and some of them are rotated

#include <iostream>
#include <vector>

using namespace std;

int RoArSearch(vector<int> arr, int tar) {
    int st = 0, end = arr.size()-1;

    while( st <= end ) {
        int mid = (st+end)/2;  // more optimised: mid = st + (end-st)/2;  // this is for worst case, which is INT_MAX  (we can't add more values after INT_MAX)

        if(arr[mid] == tar) {
            return mid;
        }

        if(arr[st] <= arr[mid]) { //left sorted
            if(arr[st] <= tar && tar <= arr[mid]) {
                end = mid -1;
            } else {
                st =mid + 1;
            }

        } else {  //right sorted
            if(arr[mid] <= tar && tar <= arr[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {6, 7, 0, 1, 2, 3, 4, 5};
    int tar = 0;

    cout << RoArSearch(arr, tar) << endl;

    // vector<int> arr2 = {-1, 0, 4, 5, 9, 12}; // even
    // int tar2 = 0;

    // cout << binarySearch(arr2, tar2) << endl;


    return 0;
}