#include <bits/stdc++.h>
using namespace std;

int main()
{
    // strings
    cout << "\tVECTOR OF STRINGS METHOD: 01\n";
    int n;
    cin >> n;
    vector<string> st;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        st.push_back(s);
    }
    
    for(int i=0;i<st.size();i++){
        cout << st[i] << " ";
    }
    cout << "\n";
    
    
    cout << "\n\tVECTOR OF STRINGS METHOD: 02\n";
    int a;
    cin >> a;
    vector<string> st2(a);
    for(int i=0;i<a;i++){
        cin >> st2[i];
    }
    
    for(string str:st2){
        cout << str << " ";
    }
    cout << "\n";
    
    
    cout << "\n\tVECTOR OF STRINGS METHOD: 03 (Multiple word in one string)\n";
    int b;
    cin >> b;
    cin.ignore();
    vector<string> st3(b);
    for(int i=0;i<a;i++){
        getline(cin,st3[i]);
    }
    
    for(string str:st2){
        cout << str << " ";
    }
    cout << "\n";
    
    return 0;
}
