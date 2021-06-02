#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
       int count = 0;
       int res = 0;
       
       for(int i = 0; i < N-1; i++) {
            if(A[i+1] > A[i]) {
                count++;
                res = max(res, count);
            }
            else
                count = 0;
       }
       
       return res;
    }
};


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}
