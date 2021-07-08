#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    float avgString(string S){
        int sum_char = 0;

        for (int i=0; i<S.length(); i++) {
            sum_char += (int)S[i];
        }

        return sum_char / S.length();
    }
};


int main() {
	int T;
    cin >> T;

    while (T--) {
        string S;
        cin>>S;
	    
	    Solution obj;
	    float ans = obj.avgString(S);
	    cout<<ans<<endl;
    }

    return 0;
}
