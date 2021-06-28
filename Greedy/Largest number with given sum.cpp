#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int m, int s)
    {
        string res="";
        
        if (s == 0)
        {
            res.append("0");
            return res;
        }

        if (s > 9*m)
        {
            res.append("-1");
            return res;
        }

        for (int i=0; i<m; i++)
        {
            if (s >= 9)
            {
                res.append("9");
                s -= 9;
            }
            else
            {
                res += to_string(s);
                s = 0;
            }
        }
     
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
