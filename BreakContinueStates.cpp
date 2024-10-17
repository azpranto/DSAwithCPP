#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int l = 1;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= l; k++)
        {
            cout<<"* ";
        }
        cout << endl;
        l = l +2;
    }
    // l = n;
    for ( i = n; i >= 1; i--)
    {
        for (int j = n-i; j >= 1; j--)
        {
            cout<<"  ";
        }
        l = l-2;
        for (int k = 1; k <= l; k++)
        {
            cout<<"* ";
        }
        cout<< endl;
        
    }
    
    

    return 0;
}