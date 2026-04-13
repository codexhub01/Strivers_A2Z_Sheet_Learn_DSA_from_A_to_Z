#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
    int c = 0 ;    
    // int cnt = int(log10(n)+1); -----> Another way to do so
    while (n>0)
        {
            int d = n %10;
            n = n / 10;
            c++;
        }
        return c;
        
    }

int main()
{
    int x;
    cout << "Enter a number : " << endl;
    cin >> x ;
    cout << "Count is : "  << countDigit(x) << endl;
}