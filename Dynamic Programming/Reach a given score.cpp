#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(ll n);

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	
	while(t--)
	{
	    //taking the score
		ll n;
		cin>>n;
		
		//calling function count()
		cout << count(n) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function tempate for C++


//Function to find the number of distinct combinations to reach the given score.
ll count(ll n) 
{
    ll table[n + 1], i;

    for(int j = 0; j < n + 1; j++)
        table[j] = 0;

    table[0] = 1;

    for (i = 3; i <= n; i++)
        table[i] += table[i - 3];

    for (i = 5; i <= n; i++)
        table[i] += table[i - 5];
     
    for (i = 10; i <= n; i++)
        table[i] += table[i - 10];
 
    return table[n];
}
