#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        string ans = "";

        for (auto it : str) {
            if (ans.empty() || ans.back() != it)
                ans.push_back(it);

            else if (ans.back() == it)
                ans.pop_back();
        }

        return ans;
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}
