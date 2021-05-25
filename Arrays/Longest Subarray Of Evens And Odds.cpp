#include<iostream> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
        int longest = 1;
        int count = 1;
 
        for (int i = 0; i < n - 1; i++) {
            if ((arr[i] + arr[i + 1]) % 2 == 1) {
                count++;
            }
            else {
                longest = max(longest, count);
                count = 1;
            }
        }
        
        longest = max(longest, count);

        if (longest == 1)
            return 1;
 
        return max(count, longest);
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
}
