#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to count the number of different ways in which n can be 
    //written as a sum of two or more positive integers.
    int countWays(int n)
    {
        int M = 1000000007;
        int table[n+1];

        memset(table, 0, sizeof(table));

        table[0] = 1;
     
        for (int i=1; i<n; i++)
            for (int j=i; j<=n; j++)
                table[j] = (table[j] + table[j-i]) % M;
     
        return table[n];
    }
};

// { Driver Code Starts.
// Driver program
int main()
{
    //taking number of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.countWays(n)<<endl;
    }
    return 0;
}
