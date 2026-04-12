#include<bits/stdc++.h>
using namespace std;
int main()
{
    // When do we use arrays :- when we have same type of data multiple times
    int arr[5]; // this means at every index an integer type of value will get stored
    cin >> arr[0]>> arr[1]>> arr[2]>> arr[3]>> arr[4];

    // Particular element stores at some kind of address in a memory & array elements are stores at consecutive memory address

    // 2D Array
    // Here it means I have4 boxes which is about 3 times repeated
    int new_arr[3][4];
    new_arr[2][3]=199;

    string s = "my name is mayank"; // string stores every character in terms of indexing
    cout << s[4] << endl;

    cout << "Print something" << endl;

}