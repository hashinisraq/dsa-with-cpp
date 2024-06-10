#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    cout << "\tINPUT METHOD-01\n";
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int val:v){
        cout << val << " ";
    }
    cout << "\n";
    
    cout << "\n\tINPUT METHOD-02\n";
    int sz;
    cin >> sz;
    vector<int> vt(sz);
    for(int i=0;i<sz;i++){
        cin >> vt[i];
    }
    for(int vl:vt){
        cout << vl << " ";
    }
    
    
    return 0;
}
