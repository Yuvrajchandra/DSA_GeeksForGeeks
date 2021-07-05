#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to print the maximum contiguous subarray sum ending at each 
    //position in the array and return the overall maximum.
    long long maximumSum(int arr[], int sizeOfArray)
    {
       int max_so_far = arr[0];
       int curr_max = arr[0];
     
        cout<<curr_max<<" ";
       for (int i = 1; i < sizeOfArray; i++)
       {
            curr_max = max(arr[i], curr_max+arr[i]);
            max_so_far = max(max_so_far, curr_max);
            cout<<curr_max<<" ";
       }

       cout<<endl;
       return max_so_far;
    }
};

// { Driver Code Starts.
int main() {
    
    //taking total testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking size of array
	    int sizeOfArray;
	    cin>>sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    //inserting elements to the array
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    Solution ob;
	    //calling function maximumSum()
	    cout<<ob.maximumSum(arr,sizeOfArray)<<endl;
	    
	}
	return 0;
}
