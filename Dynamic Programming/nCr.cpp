#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends




class Solution
{
    public:
    //Function to return nCr mod 10^9+7 for given n and r. 
    int nCrModp(int n, int r) 
    {
        int C[r + 1];
        memset(C, 0, sizeof(C));
     
        C[0] = 1;
     
        for (int i = 1; i <= n; i++) {
            for (int j = min(i, r); j > 0; j--)
                C[j] = (C[j] + C[j - 1]) % 1000000007;
        }
        return C[r];
    } 
};

// { Driver Code Starts.
// Driver program 
int main() 
{ 
  int t, n, r;
  
  //taking count of testcases
  cin >> t;
  
  while(t--){
      
      //taking n and r
      cin >> n >> r;
      Solution ob;
      //calling method nCrModp()
      cout << ob.nCrModp(n, r) << endl;
  }
  
  return 0; 
}
