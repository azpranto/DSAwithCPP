#include <iostream> 
#include <vector>

using namespace std;

void incertionSort(int arr[], int n) { //O(n^2)
    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    incertionSort(arr, n);
    printArray(arr, n);
    return 0;
}

// to print in decreasing order, just change the condition in the while loop to arr[prev] < curr (basicly, in the comparison segment)