#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        sort(arr, arr+n);
 
        int diff = INT_MAX;
        
        for (int i=0; i<n-1; i++)
          if (arr[i+1] - arr[i] < diff)
              diff = arr[i+1] - arr[i];
        
        return diff;
    }
};

    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n]; 
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int diff = ob.MinimumDifference(arr, n);
	    cout << diff << endl;
	}
	return 0;
}
