#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // size
    cout << v.size() << "\n\n";   // O(1)

    // max size
    cout << v.max_size() << "\n\n";   // O(1)

    // capacity
    cout << v.capacity() << "\n";   // O(1), result: 0
    v.push_back(66);
    cout << v.capacity() << "\n";   // O(1), result: 1
    v.push_back(12);
    cout << v.capacity() << "\n";   // O(1), result: 2
    v.push_back(48);
    cout << v.capacity() << "\n";   // O(1), result: 4
    v.push_back(52);
    cout << v.capacity() << "\n\n";   // O(1), result: 4
    // vector make it's capacity double

    // clear
    cout << v.size() << "\n";
    v.clear(); // O(N), clear the memory,not the values
    cout << v.size() << "\n";
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << v[0] << "\n";
    cout << v[1] << "\n";
    cout << v[2] << "\n";
    cout << v[3] << "\n\n";
    
    // empty
    cout << v.empty() << "\n\n"; // O(1), return true/false

    // resize
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout << v.size() << "\n";
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    v.resize(3);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    v.resize(6); // O(K),where k= new size-current size
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;
}
