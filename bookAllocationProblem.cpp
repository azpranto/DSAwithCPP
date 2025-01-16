//binary search won't be applied on the array, it will on the possible answers
// painter's partition problem is same as this

#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> vec, int n, int m, int mid) {
    int student = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i] > mid) {
            return false;
        }
        if(pages + vec[i] <= mid) {
            pages += vec[i];
        } else {
            student++;
            pages = vec[i];
        }
    }
    
    if(student <= m) {
        return true;
    } else {
        return false;
    }
    
}

int alloBooks(vector<int> vec, int n, int m) {
    if (m > n) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + vec[i];
    }

    int st = 0, max = sum, ans = -1;
    while(st <= max) {
        int mid = st + (max-st)/2;
        if(isValid(vec, n, m, mid)) { //go left
            ans = mid;
            max = mid - 1;
        } else { //go right
            st = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = arr.size(), man = 2;

    cout << alloBooks(arr, n, man) << endl;
    return 0;
}