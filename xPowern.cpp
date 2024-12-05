//binary exponenciation
//normal approach: x^n = x*x*x*x*x*x*...*nth, time complexcity O(n)
//optimal approach: x^n = x*x + x^2*x^2 + x^4*x^4 + nth, time complexcity O(logn)

#include <iostream>

using namespace std;

double myPow(double base, int power){
    if(base == 0) return 0;
    if(power == 0) return 1;
    if(base == 1) return 1;
    if(base == -1 && power%2 == 0) return 1;
    if(base == -1 && power%2 != 0) return -1;
 
 
 
    long binform = power;

    if(binform < 0) {
        base = 1/base;
        binform = -binform;
    }
    
    double ans = 1;

    while( binform > 0) {
        if( binform % 2 == 1) {
            ans *= base;
        }
        base *= base;
        binform /= 2;
    }

    return ans;

}

int main() {
    double x = 3;
    int n = 5;

    cout << myPow(x, n) << endl;
    return 0;
}