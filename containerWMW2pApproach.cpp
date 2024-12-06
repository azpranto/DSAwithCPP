// this ia an optimal approach to the Container with most water qus. 
// this meets the constrains which in n=10^5 (we can exceed n=10^8)
//time complexcity O(n)


#include <iostream>
#include <vector>

using namespace std;


int maxWvec(vector<int> vec, int n){
    int maxWater = INT_MIN;
    int lp = 0;
    int rp = n-1;

    while(lp < rp){
        
        maxWater = max(maxWater, (rp-lp) * min(vec[lp], vec[rp]));
        if(vec[lp] > vec[rp]){
            rp--;
        } else if(vec[lp] < vec[rp]){
            lp++;
        } else {
            rp--;
        }
    }

    return maxWater;
}



int main(){
    vector<int> bars = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int sz = bars.size();
    cout << maxWvec(bars, sz) << endl;
}