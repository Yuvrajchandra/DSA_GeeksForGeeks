#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
        int i, k = 0, l = 0;
 
        /* k - starting row index
            r - ending row index
            l - starting column index
            c - ending column index
            i - iterator
        */
        vector<int> res;
        
        while (k < r && l < c) {
            /* first row */
            for (i = l; i < c; ++i) {
                res.push_back(matrix[k][i]);
            }
            k++;
        
            /* last column */
            for (i = k; i < r; ++i) {
                res.push_back(matrix[i][c - 1]);
            }
            c--;
        
            /* last row */
            if (k < r) {
                for (i = c - 1; i >= l; --i) {
                    res.push_back(matrix[r - 1][i]);
                }
                r--;
            }
        
            /* first column */
            if (l < c) {
                for (i = r - 1; i >= k; --i) {
                    res.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
