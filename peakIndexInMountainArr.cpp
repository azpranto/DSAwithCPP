//it is supposed to be always a mountain array
//peak element can never be the first or end value
//it can be done with the linear search approach, time complexcity O(n)
//in this approach, it is done by binary search, time complexcity O(logn)

#include <iostream>
#include <vector>

using namespace std;

peakEle(vector<int> vec) {
    int st = 1, end = vec.size()-2;  

    while (st <= end) {
        int mid = st + (end-st)/2;

        if (vec[mid-1] < vec[mid] && vec[mid] > vec[mid+1]) {
            return mid;
        } else if (vec[mid-1] < vec[mid] && vec[mid] < vec[mid+1]) { //right side calc
            st = mid + 1;
        } else { //left side calc
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {0, 3, 8, 9, 5, 1};

    cout << peakEle(arr) << endl;

    return 0;
}