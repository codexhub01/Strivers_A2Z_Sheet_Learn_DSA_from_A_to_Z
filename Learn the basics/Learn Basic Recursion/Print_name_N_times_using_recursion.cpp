#include<bits/stdc++.h>
using namespace std;

void print_N_Times(int x , int s)
{
    if(x == (s-1))
    {
        return ;
    }
    cout << "Mayank Pal" << endl;
    s++;
    print_N_Times(x , s);
}
int main()
{
    int x = 0;
    cout << "Enter a number : " << endl;
    cin >> x ;
    print_N_Times(x , 1);
}