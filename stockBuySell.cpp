//this returns how much is the max profit after buying stocks at the lowest price and selling it for the highest price
//time complexcity O(n)


#include <iostream>
#include <vector>

using namespace std;

int stockfunc(vector<int> prices, int n) {
    int maxP = 0;
    int bestbuy = prices[0];
    
    for (int i = 1; i < n; i++)
    {
        if(prices[i] > bestbuy) {
            maxP = max(maxP, prices[i]-bestbuy);

        }

        bestbuy = min(prices[i], bestbuy);
    }

    

    return maxP;
    
}



int main() {
    vector<int> prices = {7, 1, 3, 5, 2, 6, 4};
    int sz = prices.size();

    int ans = stockfunc(prices, sz);

    cout << ans << endl;

    return 0;
}