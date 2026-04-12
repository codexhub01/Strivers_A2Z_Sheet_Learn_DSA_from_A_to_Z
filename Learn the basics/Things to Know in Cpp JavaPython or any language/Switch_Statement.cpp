#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no;
    cout << "Enter a number" << endl;
    cin >> no;
    switch (no)
    {
        //Here 1 or whatever that only which comes axccording to given input , if its int then integer value or if its character then there will be character
        case 1 :
            cout << "Monday";
            // After this using break all other conditions will break out , otherwise a single condition true remaining will also ge5t executed
            break;
        case 2 :
            cout << "Tuesday";
            break;
        case 3 :
            cout << "Wednesday";
            break;
        case 4 :
            cout << "Thrusday";
            break;
        case 5 :
            cout << "Friday";
            break;
        case 6 :
            cout << "Saturday";
            break;
        case 7 :
            cout << "Sunday";
            // default executes when nothing matches
        default:
            cout << "Nothing matches";
            
    }
}