#include<bits/stdc++.h>
using namespace std;

void f1(int cnt)
{
    
   
    if(cnt==3)
    {
        return;
    }
    cout << cnt << endl;
    cnt++;
    f1(cnt);
    
}

int main()
{
    f1(0);
}