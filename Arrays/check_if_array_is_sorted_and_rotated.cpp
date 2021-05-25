#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num){
        
        bool res = false;
        
        int flux = 0;
        int elems = 0;
        
        for(int i=0; i<num-1; i++) {
            if(arr[i+1] > arr[i]) {
                if(arr[num-1] < arr[0])
                    elems++;
            } else {
                flux++;
            }
        }
        
        if(elems == num-2 && flux==1) {
            res = true;
        }
        
        int flux1 = 0;
        int elems1 = 0;
        
        for(int i=0; i<num-1; i++) {
            if(arr[i+1] < arr[i]) {
                if(arr[num-1] > arr[0])
                    elems1++;
            } else {
                flux1++;
            }
        }
        
        if(elems1 == num-2 && flux1==1) {
            res = true;
        }
        
        return res;
        
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}
