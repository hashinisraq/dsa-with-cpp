/*
it performs when two loop, one inside another is happening
    if  both loop is bound with N, then it's time complexity = N*N
    if  one loop is bound with N and another is M, then it's time complexity = N*M

O(N*N): N possible value 10^3 for 1 second
*/

// Selection sort time complexity:N*N
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;   // O(1)
    cin >> N;  // O(1)
    int arr[N];
    for(int i=0;i<N;i++){ // O(N)
      cin >> arr[i];
    }
    for(int i=0;i<=N-1;i++){ // O(N)
      for(int j=i+1;j<N;j++){ // O(N)
        if(arr[i]>arr[j]){
          int tmp=arr[i];
          arr[i]=arr[j];
          arr[j]=tmp;
        }
      }
    }

    return 0;
}

/*
inner loop example:
          Consider N=7
          i=0     j=1,2,3,4,5,6  total=6 times = N-1  times
          i=1     j=2,3,4,5,6    total=5 times = N-2  times
          i=2     j=3,4,5,6      total=4 times = N-3  times
          i=3     j=4,5,6        total=3 times = N-4  times
          i=4     j=5,6          total=2 times = N-5  times
          i=5     j=6            total=1 times = N-6  times
                              --------------------------------
                                 total=(N-1)*(N-1)/2 = N*N      [1+2+3+........+(N-2)+(N-1)+N = N*(N-1)/2]

time complexity = O(1) + O(1) + O(N) + O(N*N)
                = O(N*N)
*/