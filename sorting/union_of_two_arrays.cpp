#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0, j = 0; 
        vector<int> uni;
        
        while (i < n && j < m) 
        { 
            if (arr1[i] < arr2[j]) {
                if(arr1[i] != arr1[i-1]) {
                    uni.push_back(arr1[i]);
                    i++;
                }
                else
                    i++;
            }
          
            else if (arr2[j] < arr1[i]) {
                if(arr2[j] != arr2[j-1]) {
                    uni.push_back(arr2[j]);
                    j++;
                }
                else
                    j++;
            }
          
            else
            { 
                if(arr1[i] != arr2[j+1] || arr1[i+1] != arr2[j]) {
                    uni.push_back(arr1[i]);
                }
                j++;
                i++; 
            } 
        } 
        
        /* Print remaining elements */
        while(i < n) {
            if(arr1[i] != arr1[i-1]) {
                uni.push_back(arr1[i]);
                i++;
            }
            else
                i++;
        }
        
        while(j < m) {
            if(arr2[j] != arr2[j-1]) {
                uni.push_back(arr2[j]);
                j++;
            }
            else
                j++;
        }
            
        return uni;
    }
};


int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
