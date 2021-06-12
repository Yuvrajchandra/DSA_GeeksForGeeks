#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        int m, n, o, i, j, k;
        
        m = A.size();
        n = B.size();
        o = C.size();
     
        vector<int> D;
        D.reserve(m + n + o);
     
        i = j = k = 0;
     
        while (i < m && j < n && k < o) {
            int m = min(min(A[i], B[j]), C[k]);
     
            D.push_back(m);

            if (m == A[i])
                i++;
            else if (m == B[j])
                j++;
            else
                k++;
        }
     
        // C has exhausted
        while (i < m && j < n) {
            if (A[i] <= B[j]) {
                D.push_back(A[i]);
                i++;
            }
            else {
                D.push_back(B[j]);
                j++;
            }
        }
     
        // B has exhausted
        while (i < m && k < o) {
            if (A[i] <= C[k]) {
                D.push_back(A[i]);
                i++;
            }
            else {
                D.push_back(C[k]);
                k++;
            }
        }
     
        // A has exhausted
        while (j < n && k < o) {
            if (B[j] <= C[k]) {
                D.push_back(B[j]);
                j++;
            }
            else {
                D.push_back(C[k]);
                k++;
            }
        }
     
        // A and B have exhausted
        while (k < o)
            D.push_back(C[k++]);
     
        // B and C have exhausted
        while (i < m)
            D.push_back(A[i++]);
     
        // A and C have exhausted
        while (j < n)
            D.push_back(B[j++]);
     
        return D;
    } 

};

// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
}
