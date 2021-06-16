#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        int n = str1.length(), m = str2.length();

        if (n != m)
            return false;

        int count[MAX_CHARS] = { 0 };
        int dcount[MAX_CHARS] = { 0 };

        for (int i = 0; i < n; i++) {
            count[str1[i]]++;
            dcount[str2[i]]++;
     
            if (count[str1[i]] != dcount[str2[i]])
                return false;
        }
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
