#include <bits/stdc++.h>
using namespace std;

int main()
{
    // assign
    cout << "\tASSIGN\n";
    vector<int> x={10,20,30};
    vector<int> v={1,2,3};
    v=x; // O(1)
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    
    vector<int> xy={10,20,30,40};
    vector<int> vv={1,2,3};
    vv=xy; // O(N): N will be max of xy and vv size
    for(int i=0;i<vv.size();i++){
        cout << vv[i] << " ";
    }
    cout << "\n";
    
    // push_back
    cout << "\n\tPUSH BACK\n";
    vv.push_back(50); // O(1), add 50 the last index 
    for(int i=0;i<vv.size();i++){
        cout << vv[i] << " ";
    }
    cout << "\n";
    
    // pop_back
    cout << "\n\tPOP BACK\n";
    vv.pop_back(); // O(1), 50 will be out
    for(int i=0;i<vv.size();i++){
        cout << vv[i] << " ";
    }
    cout << "\n";
    
    
    // insert
    cout << "\n\tINSERT\n";
    vector<int> vt1={1,2,3,4,5};
    for(int x:vt1){
        cout << x << " ";
    }
    cout << "\n";
    vt1.insert(vt1.begin()+2,6); // O(N+K) where N+K means max of N and K,  (index iterator/pointer, value)
    for(int x:vt1){
        cout << x << " ";
    }
    cout << "\n";
    vector<int> vt2={10,20,30};
    vt1.insert(vt1.begin()+2,vt2.begin(), vt2.end()); // O(N+K) where N+K means max of N and K,  (index iterator/pointer, second vector start pointer, end pointer)
    for(int y:vt1){
        cout << y << " ";
    }
    cout << "\n";
    
    
    // erase
    cout << "\n\tERASE\n";
    vector<int> vtr={12,21,34,44,55};
    vtr.erase(vtr.begin()+1); // O(N+K), 1 index value will be deleted
    for(int a:vtr){
        cout << a << " ";
    }
    cout << "\n";
    vtr.erase(vtr.begin()+1,vtr.begin()+3); // O(N+K), 1 index to 3 index value will be deleted
    // vtr.erase(vtr.begin()+1,vtr.end()-2); // O(N+K), 1 index to 3 index value will be deleted, both are same
    for(int b:vtr){
        cout << b << " ";
    }
    cout << "\n";
    
    // replace
    cout << "\n\tREPLACE\n";
    vector<int> vetr={100,200,500,600,700};
    // FORMAT: replace(startIndexPointer,endIndexPointer,value,replace_value)    
    replace(vetr.begin(),vetr.end(),500,350); // O(N)
    for(int c:vetr){
        cout << c << " ";
    }
    cout << "\n";
    
    // find
    cout << "\n\tFIND\n";
    vector<int> vectr={11,22,55,66,77, 66};
    // FORMAT: find(v.begin(),v.end(),V);    it returns a iterator/pointer
    vector<int> ::iterator vi = find(vectr.begin(),vectr.end(), 66);  // O(N)
    cout << *vi << "\n";
    auto vii = find(vectr.begin(),vectr.end(), 100);  // O(N)
    if(vii == vectr.end()){
        cout << "Not Found\n";
    }
    else{
        cout << "Found\n";
    }
    
    return 0;
}
