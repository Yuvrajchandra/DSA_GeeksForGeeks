// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

int digitsInFactorial(int n)
{
    if (n < 0) 
        return 0; 
  
    if (n <= 1) 
        return 1; 

    double digits = 0; 
    
    for (int i=2; i<=n; i++) 
        digits += log10(i); 
  
    return floor(digits) + 1; 
}

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling method digitsInFactorial()
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
