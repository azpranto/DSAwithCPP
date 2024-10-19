#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {12, 8, 23, 3, 9};
    vector<int> ans;
    int sz = vec.size();
    int target = 11;

    for(int i = 0; i < sz; i++) {
        for(int j = i+1; j < sz; j++) {
            if (vec[i] + vec[j] == target) {
                ans.push_back(i);      //adds the index of vec
                ans.push_back(j);      //same
                cout << ans[0] << ", " << ans[1] <<endl;
                break;
            }
        }
    }
}