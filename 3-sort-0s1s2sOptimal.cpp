//dutch national flag algorithm
//O(n) time complexity and O(1) space complexity with single pass
#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else if(arr[mid] == 2) {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 1, 2, 0, 1, 2};
    int n = arr.size();

    sortColors(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}


//logic
// 0  0  0  0      1  1  1  1       (unsorted values)      2  2  2  2
// 0      (l-1)    l       (m-1)    m               h    (h+1)     (n-1)


// [][][][][][][][][][][][][][][][]
// m------------->m
//      x        h<---------------h
//                     n-x

//      x+n-x=n, so, O(n)