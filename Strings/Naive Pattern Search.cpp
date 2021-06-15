#include<bits/stdc++.h> 
using namespace std; 


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
        bool present = false;
        
        for(int i=0; i<txt.length(); i++) {
            int j;
            for (j=0; j<pat.length(); j++)
                if (txt[i+j] != pat[j])
                    break;
                    
            if(j == pat.length()) {
                present = true;
                return present;
            }
        }
        
        return present;
    }
};


int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}
