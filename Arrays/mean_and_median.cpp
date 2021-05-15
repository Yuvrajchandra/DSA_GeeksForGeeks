#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        sort(A, A+N);
        
        if(N % 2 == 0) {
            return int((A[N/2] + A[(N-2)/2])/2);
        } else {
            return A[(N - 1)/2];
        }
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum = 0;
        for(int i=0; i<N; i++) {
            sum += A[i];
        }
        
        return int(sum/N);
    }
};


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        
        //inseting elements in the array
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        Solution ob;
        //calling mean() and median() functions
        cout<<ob.mean(a,N)<<" "<<ob.median(a,N)<<endl;
    }
    return 0;
}
