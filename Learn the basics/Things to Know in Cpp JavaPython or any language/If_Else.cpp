#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter value of x " << endl;
    cin >> x;
    if(x==18)
    {
        cout << "Going To Adult" << endl;
    }
    else if (x<18)
    {
        cout << "Not Adult" << endl;
    }
    else
    {
        cout << "You're already an adult" << endl;
    }

    cout << endl;

    int marks;
    cout << "Enter Marks " << endl;
    cin >> marks ;
    if(marks<25)
    {
        cout << "F" ;
    }
    // for multiple condition we use && operator
    else if(marks>=25 && marks<=44)
    {
        cout << "E" ;
    }
    else if(marks>=45 && marks<=49)
    {
        cout << "D" ;
    }else if(marks>=50 && marks<=59)
    {
        cout << "C" ;
    }else if(marks>=60 && marks<=79)
    {
        cout << "B" ;
    }else if(marks>=80 && marks<=100)
    {
        cout << "A" ;
    }

    cout << endl;

    int age ;
    cout << "Enter your age : " << endl;
    cin >> age ;
    if(age<18)
    {
        cout << "Not eligible for a job" ;
    }
    else if(age>=18 && age<=54)
    {
        cout << "eligible for a job" ;
    }
    else if(age>=55 && age<=57)
    {
        cout << "eligible for a job , but retirement soon" ;
    }
    else
    {
        cout << "retirement time" ;
    }
}