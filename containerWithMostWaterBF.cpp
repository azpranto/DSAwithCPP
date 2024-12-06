//time complexcity O(n^2)


#include <iostream>
#include <vector>

using namespace std;


int maxWvec(vector<int> vec, int n){
    int maxwater = 0;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int w = j - i;
            int ht = min(vec[i], vec[j]);
            int currWater = w *ht;

            maxwater = max(maxwater, currWater);
        }
    }

    return maxwater;
}


int main(){
    vector<int> bars = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int sz = bars.size();
    cout << maxWvec(bars, sz) << endl;
}