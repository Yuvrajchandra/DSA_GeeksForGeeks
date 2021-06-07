#include <bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        int i = 0, j = 0;
        vector<int> intersec;
        
        while (i < N && j < M) {
            if (arr1[i] < arr2[j])
                i++;
            else if (arr2[j] < arr1[i])
                j++;
            else if(arr1[i] == arr1[i-1] || arr2[j] == arr2[j-1])
            {
                i++;
                j++;
            }
            else
            {
                intersec.push_back(arr2[j]);
                i++;
                j++;
            }
        }
        
        return intersec;
    }

};

int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        Solution ob;
        // Function calling 
        vector<int> v;
        v = ob.printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
}
