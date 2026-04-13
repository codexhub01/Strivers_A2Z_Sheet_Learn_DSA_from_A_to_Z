#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    long long int r = 0 ;
    int cpv = x;
        if(cpv<0)
        {
            return false;
        }     
        while (cpv>0)
        {
            int d = cpv %10;
            r = (r*10)+d;
            cpv = cpv / 10;
           
        }
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
    cout << "Palindrome or Not : "  << isPalindrome(x) << endl;
}