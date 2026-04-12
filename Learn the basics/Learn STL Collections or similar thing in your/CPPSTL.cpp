#include<bits/stdc++.h>
using namespace std;

void f1()
{
    cout << "Void Function" << endl;
} 

int sum(int a , int b)
{
    return a+b;
}

int main()
{
    f1();

    int res = sum(2,4);
    cout << res << endl;

    //Pairs
    pair<int , int > p = {1,2} ;
    pair<double , pair<double , int>> d = {2,{3,4}} ;
    cout << p.first << endl;
    cout << d.second.first << endl;
    pair<int,int> arr[] = {{3,5},{8,1}};
    cout << arr[1].second << endl;


    //vectors
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // Irts generally faster than push_back
    vector<pair<int,int>> d; //vector of pair datatype
    // d.push_back({3,4});
    // d.push_back({3,4});
    vector<int> s(5,10) ; // This means size of vector is 5 and all of them are filled with 10 as value
    vector<int> g(5) ; // this means size of vectos is 5 and contins some garbage value at all index
    vector<int> m(g) ; // here we are copying g vector into m

    //Iterators
    vector<int> :: iterator ir = s.begin(); // here s.begin() pointing memorey address 
    cout << *ir << endl ; //here we will get value which is present at that particular index because of *
    vector<int> :: iterator ed = s.end() ; // this will point index right after last element , so to access last element u have to use ed--
    cout << v.back() << endl; // bascially it will print last element
    //datatype automatically assign in auto
    
    for(auto i : s) // auto is same as like vector<int> :: iterator
    {
        cout << i << endl;
    }
    
    //To erase multiple element
    v.erase(v.begin()+1);
    v.insert(v.begin(),201);
    v.pop_back();
    v.clear();
    v.empty(); // bascially this checks whether a vector is empty or not

    queue<int> a ;
    priority_queue<int> pq;
    deque<int> dq;
    








}