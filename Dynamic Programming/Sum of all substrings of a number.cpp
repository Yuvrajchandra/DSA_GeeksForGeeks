#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        int MOD = 1000000007;
        long long int sum = 0;
        long long int mf = 1;
        
        for (int i=s.length()-1; i>=0; i--)
        {
            sum += (s[i]-'0') * (i+1) * mf % MOD;
            sum %= MOD;
            mf = (mf*10 + 1) % MOD;
        }
     
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}
