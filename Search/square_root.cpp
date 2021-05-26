#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        if (x == 0 || x == 1)
            return x;
     
        int left = 1, right = x, ans;
        
        while (left <= right) {
            int mid = (left + right) / 2;
     
            if (mid * mid == x)
                return mid;

            if (mid <= x / mid) {
                left = mid + 1;
                ans = mid;
            }
            else
                right = mid - 1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
