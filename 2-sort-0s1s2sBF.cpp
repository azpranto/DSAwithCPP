#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& arr, int n) { //finally O(n)
    int count0 =0, count1 = 0, count2 = 0;
    //O(n)
    for(int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    //O(n) for the total 3 loops
    int idx = 0;
    for(int i = 0; i < count0; i++) {
        arr[idx++] = 0;
    }
    for(int i = 0; i < count1; i++) {
        arr[idx++] = 1;
    }
    for(int i = 0; i < count2; i++) {
        arr[idx++] = 2;
    }
}

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int n = arr.size();

    sortColors(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}