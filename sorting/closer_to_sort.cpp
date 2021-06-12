#include <iostream>
using namespace std;


class Solution{
  public:

    int closer(int arr[],int n, int x)
    {
        int l=0, r=n;
        
        while (r >= l)
        {
            int mid = l + (r - l) / 2;
      
            if (arr[mid] == x) 
                return mid;
            if (mid > l && arr[mid - 1] == x)
                return (mid - 1);
            if (mid < r && arr[mid + 1] == x) 
                return (mid + 1);
                
            if (arr[mid] > x) 
                r = mid-2;
            if(arr[mid] < x)
                l = mid+2;
        }
          
        return -1;
    }
};


int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    Solution obj;
	    int res = obj.closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}
