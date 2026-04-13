#include<bits/stdc++.h>
using namespace std;

void AllDivisor(int x) {
    for(int i = 1 ; i <=x ; i++)
    {
        if(x%i == 0)
        {
            cout << i << " " ;
        }
    }
    }

int main()
{
    int x;
    cout << "Enter a number : " << endl;
    cin >> x ;
    AllDivisor(x);
}