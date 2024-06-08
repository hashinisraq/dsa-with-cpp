/*
it performs when two loop, one inside another is happening
    if  both loop is bound with N, then it's time complexity = N*N
    if  one loop is bound with N and another is M, then it's time complexity = N*M

O(N*N): N possible value 10^3 for 1 second
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;   // O(1)
    cin >> N;  // O(1)
    for(int i=1;i<=N;i++){ // O(N)
      for(int j=1;j<=N;j++){ // O(N)
        cout << i << " " << j << " \n";
      }
    }

    return 0;
}

/*
time complexity = O(1) + O(1) + O(N*N)
                = O(N*N)
*/