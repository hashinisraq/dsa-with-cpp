/*
Example:
        1000   500    250    125      62      31     15       7       3       1
          N    N/2    N/4    N/8     N/16    N/32   N/64    N/128   N/256   N/512
          N   N/2^1  N/2^2  N/2^3   N/2^4    N/2^5  N/2^6   N/2^7   N/2^8   N/2^9

            N/2^K = 1  [K = step]
          =>N = 2^K
          =>log(N) = log(2^K) [log base =2 because it is the worst base for logarithom]
          =>log(N) = Klog(2)
          =>K = log(N)

shortcut: if division/multiplication is continuously used as multiplier(গুণিতক), then complexity will be log(N)
***Better than O(N) complexity

O(logN): N possible value 10^18 for 1 second
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;   // O(1)
    cin >> N;  // O(1)
    while(N>0){  // O(logN)
        int digit=N%10;
        cout << digit << "\n"; 
        N=N/10;
    }
    return 0;
}

/*
time complexity = O(1) + O(1) + O(logN)
                = O(logN)
*/