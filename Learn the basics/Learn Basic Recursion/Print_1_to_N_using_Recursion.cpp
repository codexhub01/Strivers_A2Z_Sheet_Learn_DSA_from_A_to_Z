#include<bits/stdc++.h>
using namespace std;

void Print_1_To_N(int s , int e)
{
    if(s>e)
    {
        return ;
    }
    cout << s << endl;
    s++;
    Print_1_To_N(s,e);
}

int main()
{
    int x ;
    cout << "Enter a number" << endl;
    cin >> x;
    Print_1_To_N(1 , x);
}