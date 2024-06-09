/*
    STL = Standard Template Library
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // type 1 - just declare vector
    vector<int> v1;  // O(1)
    cout << "v1 size: " << v1.size() << "\n\n";   // O(1)
    
    
    // type 2 -  declare vector with the size
    vector<int> v2(6);   // O(N)
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    cout << "\n";
    cout << "v2 size: " << v2.size() << "\n\n";
    
    
    // type 3 - declare vector with size and value
    vector<int> v3(10,60);    // O(N)
    for(int i=0;i<v3.size();i++){
        cout << v3[i] << " ";
    }
    cout << "\n";
    cout << "v3 size: " << v3.size() << "\n\n";
    
    // type 4 - declare vector size and value using another vector
    vector<int> v4(v3);   // O(N)
    for(int i=0;i<v4.size();i++){
        cout << v4[i] << " ";
    }
    cout << "\n";
    cout << "v4 size: " << v4.size() << "\n\n";
    
    // type 5 - declare vector size and value using an array
    int arr[4]={1,2,3,4};
    vector<int> v5(arr,arr+4);    // O(N)
    for(int i=0;i<v5.size();i++){
        cout << v5[i] << " ";
    }
    cout << "\n";
    cout << "v5 size: " << v5.size() << "\n\n";
    
    return 0;
}
