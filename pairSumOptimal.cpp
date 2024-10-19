// two pointer approach
// we assume that the given array in already sorted

#include <iostream>
#include <vector>

using namespace std;

vector<int> ansFunc(vector<int> vec, int tgSum) {
    int i = 0;
    int j = vec.size()-1;
    vector<int> ans;

    while( i < j) {
        if(vec[i] + vec[j] == tgSum) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        } else if(vec[i] + vec[j] > tgSum) {
            j -= 1;
        } else {
            i += 1;
        }
    }

    return{};
}


int main() {
    vector<int> vec = {2, 7, 11, 15};
    int tgSum = 18;

    vector<int> ans = ansFunc(vec, tgSum);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
    
}