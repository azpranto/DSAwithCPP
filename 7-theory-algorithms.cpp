#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    else return false;
    //this comparator function sorts pairs based on the second element in ascending order.
}

bool comparator2(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return true;
    else return false;
    //this comparator function sorts pairs based on the second element in ascending order. if second elements are equal, it sorts based on the first element in ascending order.
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};

    sort(arr, arr + 5); // sorts the array in ascending order, TC O(n log n), SC O(1)

    for(int val : arr) {
        cout << val << " "; // prints the sorted array
    }
    cout << endl;

    //same goes for vectors
    vector<int> vec = {5, 2, 8, 1, 3};

    sort(vec.begin(), vec.end()); // sorts the vector in ascending order, TC O(n log n), SC O(1)

    for(int val : vec) {
        cout << val << " "; // prints the sorted vector
    }
    cout << endl;

    sort(vec.begin(), vec.end(), greater<int>()); // sorts the vector in descending order, TC O(n log n), SC O(1)
    //we can do the same for arrays, but we need to use a custom comparator function or lambda function.

    //custom comparators
    vector<pair<int, int>> vec_pairs = {{3, 1}, {2, 1}, {7, 1}, {5, 2}, {4, 2}};

    //sort(vec_pairs.begin(), vec_pairs.end()); // in this case, it sorts based on the first element of the pair in ascending order. if first elements are equal, it sorts based on the second element in ascending order.
    sort(vec_pairs.begin(), vec_pairs.end(), comparator); // sorts the vector of pairs based on the second element in ascending order, TC O(n log n), SC O(1)
    /*comparator2: gets sorted accordingly*/
    //these 3rd argument works both for arrays and vectors


    //reverse
    
    vector<int> vec2 = {5, 2, 8, 1, 3};

    reverse(vec2.begin(), vec2.end()); // reverses the vector, TC O(n), SC O(1)

    for(int val : vec2) {
        cout << val << " "; // prints the reversed vector
    }
    cout << endl;

    reverse(vec2.begin() + 1, vec2.begin() + 3); // reverses the elements from index 1 to index 2 (inclusive), TC O(n), SC O(1)

    //next_permutation

    string str = "abc";

    next_permutation(str.begin(), str.end()); // generates the next lexicographical permutation of the string, TC O(n), SC O(1)

    cout << str << endl; // prints the next permutation

    //next_permutation works for strings, arrays, vectors, and any other container that supports iterators.

    //prev_permutation
    //exactly similar to next_permutation, but generates the previous lexicographical permutation of values.

    
    
    //other algorithms: 
    
    //swap, min, max
    // min_element, max_element (works for arrays, vectors, and any other container that supports iterators. need to dereference the iterator to get the value)

    auto min_it = min_element(vec.begin(), vec.end());
    auto max_it = max_element(vec.begin(), vec.end());

    cout << "Min element: " << *min_it << endl;
    cout << "Max element: " << *max_it << endl;

    //binary_search: binary_search(v.begin(), v.end(), target); // returns true if target is present in the vector, otherwise false. it works only for sorted vectors/arrays. TC O(log n), SC O(1)


    //set bits

    // __builtin_popcount(); is not ideal for industry usage. in CP, it is used frequently. it comes only with GCC compiler, so it is not portable. it counts the number of set bits in an integer. it is a built-in function in GCC.

    int n = 15;
    long int n2 = 15;
    long long int n3 = 15;

    cout << "Number of set bits in " << n << ": " << __builtin_popcount(n) << endl; // counts the number of set bits in n, TC O(log n), SC O(1)
    cout << "Number of set bits in " << n2 << ": " << __builtin_popcountl(n2) << endl; // counts the number of set bits in n2, TC O(log n), SC O(1)
    cout << "Number of set bits in " << n3 << ": " << __builtin_popcountll(n3) << endl; // counts the number of set bits in n3, TC O(log n), SC O(1)

    return 0;
}