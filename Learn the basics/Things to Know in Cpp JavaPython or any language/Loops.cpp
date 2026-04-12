#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cout << "Enter no of times " << endl;
    cin >> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cout << "For loop is running" << endl;
    }

    cout << endl;
    int j = 0;
    while(j<n)
    {
        cout << "While Loop is running"<< endl;
        j++;
    }

    cout << endl;
    
    int k = 6;
    do
    {
        cout << "Atleast one time" << endl;
        k++;
    } while (k<n);
    
}