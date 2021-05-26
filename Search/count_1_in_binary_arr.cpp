#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        
        int low=0, high=N-1;
       
        while(low <= high) {
            int mid= (low+high)/2;
            
            if(arr[N-1]==1)
                return N;
            
            if((arr[mid]==1 && arr[mid+1]==0))
                return mid+1;
            else if(arr[mid]==1 && arr[mid+1]==1) {
                low = mid + 1;
            }
            else
                high = mid - 1;
       }
       
       return 0;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}
