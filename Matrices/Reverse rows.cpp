#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{   
    public:
    //Function to interchange the rows of a matrix.
    void swap(int* a, int* b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    void interchangeRows(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix[0].size(); i++) {
            int start = 0;
            int end = matrix.size() - 1;
     
            while (start < end) {
                swap(&matrix[start][i], &matrix[end][i]);
                start++;
                end--;
            }
        }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.interchangeRows(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
