/*
10^14 can be done in 1 second using sqrt(10^14)=10^7
***Better than O(N) complexity but not better that O(logN)

O(sqrt(N)): N possible value 10^14 for 1 second
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;   // O(1)
    cin >> N;  // O(1)
    // i<=sqrt(N) alternative way: i*i<=N
    for(int i=1;i<=sqrt(N);i++){ // O(sqrt(N))
      if(N%i==0){
        cout << i << " ";
        if(N/i != i){
          cout << N/i << "\n";
        }
      }
    }

    return 0;
}

/*
time complexity = O(1) + O(1) + O(sqrt(N))
                = O(sqrt(N))
*/