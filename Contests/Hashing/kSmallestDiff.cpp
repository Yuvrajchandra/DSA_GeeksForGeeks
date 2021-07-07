#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countPairs(int *a, int n, int mid)
    {
        int res = 0;
        for (int i = 0; i < n; ++i)

            res += upper_bound(a+i, a+n, a[i] + mid) - (a + i + 1);
        return res;
    }
    
    int kSmallestDiff(int n, int a[], int k){
        sort(a, a+n);

        int low = a[1] - a[0];
        for (int i = 1; i <= n-2; ++i)
            low = min(low, a[i+1] - a[i]);

        int high = a[n-1] - a[0];

        while (low < high)
        {
            int mid = (low+high)>>1;
            if (countPairs(a, n, mid) < k)
                low = mid + 1;
            else
                high = mid;
        }
     
        return low;
    }
};


int main() {
	int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int index = 0; index < N; index++){
	        cin >> arr[index];
	    }
	    
	    Solution obj;
	    int ans = obj.kSmallestDiff(N, arr, K);
	    cout<<ans<<endl;
    }

    return 0;
}
