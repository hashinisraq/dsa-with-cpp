/*
O(N): N max value 10^7 for 1 second
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;   // O(1)
    cin >> n;  // O(1)
    int arr[n];  // O(1)
    for(int i=0;i<n;i++){  // O(n)
        cin >> arr[i];
    }
    int s=0;  // O(1)
    for(int i=0;i<n;i+=2){  // O(n)
        s+=arr[i];
    }
    cout << s << "\n"; // O(1)
    return 0;
}

/*
time complexity = O(1) + O(1) + O(1) + O(n) + O(1) + O(n) + O(1)
                = O(n) + O(n)
                = O(n)
*/