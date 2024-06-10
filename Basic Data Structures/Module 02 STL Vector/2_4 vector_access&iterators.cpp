#include <bits/stdc++.h>
using namespace std;

int main()
{
    // access
    cout << "\tACCESS\n";
    vector<int> v={10,20,30,40,50,60,70,80,90,100};
    cout << v[0] << "\n";           // O(1)
    cout << v.front()<< "\n";       // O(1)
    cout << v[v.size()-1] << "\n";  // O(1)
    cout << v.back()<< "\n";        // O(1)
    cout << v.at(6)<< "\n";        // O(1)
    cout << "\n";
    
    // iterator
    cout << "\n\tITERATOR\n";
    vector<int> vt={10,20,30,40,50,60,70,80,90,100};
    vector<int> :: iterator it;
    for(it=vt.begin();it<vt.end();it++){
        cout << *it << " ";
    }
    cout << "\n";
    
    for(auto itt=vt.begin();itt<vt.end();itt++){
        cout << *itt << " ";
    }
    
    return 0;
}
