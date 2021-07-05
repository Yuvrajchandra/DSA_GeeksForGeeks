#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        int res[n + 1];
        int temp = 0;
        res[0] = 1;
        res[1] = 1;
        res[2] = 2;
        for (int i = 3; i <= n; i++)
            res[i] = (res[i - 1] + res[i - 2]) % 1000000007;
 
        return res[n];
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
