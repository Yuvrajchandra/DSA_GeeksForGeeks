#include <bits/stdc++.h>
using namespace std;
  
void getTheShadow(vector<int> arr)
{
    int i;
  
    for (i = 0; i < arr.size(); i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << " ";
    }
  
    for (i = 0; i < arr.size(); i++) {
        if (arr[i] > 0)
            cout << (i + 1);
    }
    
    cout<<endl;
}
  
int main()
{
    int T;
    cin >> T;
    
    vector<vector<int>> vec;

    while (T--) {
        vector<int> arr;
        
        int inp;
        cin >> inp;
        
        for(int i=0; i<inp; i++) {
            int elem;
            cin>>elem;
            arr.push_back(elem);
        }
        
        vec.push_back(arr);
    }

    for (auto it = vec.begin(); it != vec.end(); it++)
        getTheShadow(*it);

    return 0;
}
