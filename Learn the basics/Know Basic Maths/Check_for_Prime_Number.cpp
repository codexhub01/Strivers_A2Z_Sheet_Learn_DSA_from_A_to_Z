#include<bits/stdc++.h>
using namespace std;

bool CheckPrime(int x) {
    // It can also workout till sqrt of given number which is optmized approach
    for(int i = 2 ; i < x ; i++)
    {
        if(x%i == 0)
        {
           return false;
        }
    }
    return true;
    }

int main()
{
    int x;
    cout << "Enter a number : " << endl;
    cin >> x ;
    cout << "Prime Or Not : " << CheckPrime(x);
}