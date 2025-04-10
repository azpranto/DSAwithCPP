#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& A, vector<int>& B, int m, int n) {
    int i = m - 1, j = n - 1, idx = m+n - 1;
    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }
    
    while(j >= 0) {
        A[idx--] = B[j--];
    }
}

int main() {
    int n1 = 3, n2 = 3;
    vector<int> arr1 = {4, 5, 6, 0, 0, 0};
    vector<int> arr2 = {1, 2, 3};

    merge(arr1, arr2, n1, n2);

    for (int i = 0; i < n1+n2; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}