//largest minimum distance between cows

#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minimumAllowedDist) { //O(N)
    int cows = 1, lastPos = arr[0];

    for(int i = 1; i < N; i++) {
        if(arr[i] - lastPos >= minimumAllowedDist) {
            cows++;
            lastPos = arr[i];
        }

        if(cows == C) {
            return true;
        }
    }

    return false;
}

int getDistance(vector<int> &arr, int cows) { //O(NlogN)
    sort(arr.begin(), arr.end());

    int st = 1, end = arr[N-1] - arr[0], ans = -1;
    while(st <= end) { //O(logRange * N)
        int mid = st + (end - st) / 2;

        if(isPossible(stalls, cows, mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    
    cout << getDistance(arr, N, C) << endl;
    return 0;
}