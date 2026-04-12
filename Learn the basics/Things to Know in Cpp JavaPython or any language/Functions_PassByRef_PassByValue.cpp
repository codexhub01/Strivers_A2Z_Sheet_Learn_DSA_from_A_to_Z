#include<bits/stdc++.h>
using namespace std;

void F1()
{
    cout << "Void Function" << endl;
}

int SumOfNum(int x , int y)
{
    return x+y;
}

void pass_by_value(int no)
{
    no+=10;
    no+=100;
    cout << no << endl;
}

//Here & will use address of original value to update values over there
void pass_by_refrence(int &x)
{
    x+=10000;
    cout << "update value of x : " << x << endl;
}

int main()
{
    // Functions is a set of code which can do something for you repeated times 
    // Functions are used to increase readibility
    int value ;
    cout << "Enter a number" << endl;
    cin >> value;

    F1();

    int sum_value = SumOfNum(10,18);
    cout << "Sum of two numbers is : " << sum_value << endl;
    
    pass_by_value(value); // During pass by value , a copy of values goes not a original number
    cout << "Updated value is : " << value << endl;

    pass_by_refrence(value); // During pass by refrence , a original value goes
    cout << "Updated value after passing through passed by refrence : " << value << endl;

}