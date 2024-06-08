/*
sort function use O(NlogN) time complexity
O(NlogN) better than N*N but not better than N
O(NlogN): N possible value 10^6 if 2 second
          N possible value 10^5 if 1 second
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;   // O(1)
    cin >> N;  // O(1)
    for(int i=0;i<=N-1;i++){ // O(N)
      int x=i;
      while (x>0){ // O(logN)
        int digit=x%10;
        cout << digit << " ";
        x/=10;
      }
      cout << "\n";      
    }

    return 0;
}

/*
time complexity = O(1) + O(1) + O(NlogN)
                = O(NlogN)
*/