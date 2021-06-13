#include <bits/stdc++.h> 
using namespace std; 


class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        vector<vector<int>> c;
        
        if(A[0].size() != B.size())
            return c;
        
        for (int i = 0; i < A.size(); ++i) {
            vector<int> elem_res;
            for (int j = 0; j < B[0].size(); ++j) {
                int sum = 0;
                for (int k = 0; k < B.size(); ++k) {
                    sum = sum + A[i][k]*B[k][j];
                }
                elem_res.push_back(sum);
            }
            c.push_back(elem_res);
        }
        
        return c;
    }
};



int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
