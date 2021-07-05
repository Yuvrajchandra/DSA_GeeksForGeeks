#include <bits/stdc++.h>
#include <fstream>
using namespace std;


class Solution {
    public:
    //Function to find the nth fibonacci number using top-down approach.
    long long findNthFibonacci(int number, long long int dp[]) {
        if (dp[number] == 0) { 
            if (number <= 1) 
                dp[number] = number; 
            else
                dp[number] = findNthFibonacci(number - 1, dp) + findNthFibonacci(number - 2, dp); 
        } 
      
        return dp[number]; 
    }
};


int main()
 {
    //initializing base value
    long long dp[100]={0};
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    
    //taking total testcases
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        //taking nth number 
        int number;
        cin>>number;
        
        //calling findNthFibonacci() function
        Solution obj;
        cout<<obj.findNthFibonacci(number, dp)<<endl;
    }
    
	return 0;
}
