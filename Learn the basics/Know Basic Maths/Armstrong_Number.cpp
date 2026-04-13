#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int x) {
    long long int r = 0 ;
    int cpv = x;
        if(cpv<0)
        {
            cpv = -(cpv);
        }     
        while (cpv>0)
        {
            int d = cpv %10;
            r = r + ( d * d * d );
            cpv = cpv / 10;
           
        }
        cout << "After Cube : " << r << endl;
        if(r == x)
        {
            return true ;
        }
        return false;
    }

int main()
{
    int x;
    cout << "Enter a number : " << endl;
    cin >> x ;
    cout << "Armstrong or Not : "  << isArmstrong(x) << endl;
}