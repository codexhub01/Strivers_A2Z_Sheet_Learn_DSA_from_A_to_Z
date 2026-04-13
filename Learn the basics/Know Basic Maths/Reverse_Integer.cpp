#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int r = 0 ;
        int cpv = x;
        if(x >= INT_MAX || x <= INT_MIN)
        {
            return 0;
        }
        if(cpv<0)
        {
            cpv = - (cpv);
        }     
        while (cpv>0)
        {
            int d = cpv %10;
            if(r > INT_MAX/10 || r < INT_MIN/10)
            {
                return 0;
            }
            r = (r*10)+d;
            cpv = cpv / 10;
           
        }
        if(x<0)
        {
            return -r;
        }
        return r;
    }

int main()
{
    int x;
    cout << "Enter a number : " << endl;
    cin >> x ;
    cout << "Reverse no is : "  << reverse(x) << endl;
}