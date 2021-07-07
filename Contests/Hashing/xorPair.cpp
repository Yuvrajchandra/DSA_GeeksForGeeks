#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    bool xorPair(int N, int arr[], int C){
        int result = 0;
        
        unordered_set<int> s;
     
        for (int i=0; i<N; i++)
        {
            if (s.find(C^arr[i]) != s.end())
                result++;

            s.insert(arr[i]);
        }
        
        if (result)
            return 1;
        return 0;
    }
};


int main() {
	int T;
    cin >> T;

    while (T--) {
        int N, C;
        cin >> N >> C;
        
        int arr[N];
        
        for(int index = 0; index < N; index++){
	        cin >> arr[index];
	    }
	    
	    Solution obj;
	    bool ans = obj.xorPair(N, arr, C);
	    ans ? cout<<"Yes" : cout<<"No";
	    cout<<endl;
    }

    return 0;
}
