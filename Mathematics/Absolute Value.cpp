// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

int absolute(int I);

int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        cout << absolute(I) << endl; // print the output
    }
    return 0;
}// } Driver Code Ends


// User function Template for C++

int absolute(int I) {
    if (I == 0)
        return 0;
    else if (I < 0)
        return -(I);
    else
        return I;
}
