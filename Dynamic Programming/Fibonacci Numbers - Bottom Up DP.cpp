#include <bits/stdc++.h>
#include <fstream>
using namespace std;


class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        long long f[number+1];
        int i;
        f[0] = 1;
        f[1] = 1;
        
        for (i = 2; i <= number; i++)
            f[i] = f[i-1] + f[i-2];
        
        return f[number-1];
    }
};


int main()
 {
    //taking testcases
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        //taking nth fibonacci 
        //to be found
        int number;
        cin>>number;
        
        //calling function findNthFibonacci()
        //and passing number as parameter
        Solution obj;
        cout<<obj.findNthFibonacci(number)<<endl;
    }
    
	return 0;
}
