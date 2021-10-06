/*
 * Approach : The idea is to compare x with the last element in arr[].
 * If an element is found at the last position, return it.
 * Else recur elmntSrch() for remaining array and element x.
 */
 
#include <iostream>
 
using namespace std;
 
// Recursive function to search x in arr[]
int elmntSrch(int arr[], int size, int x) {
    int rec;
 
    size--;
 
    if (size >= 0) {
        if (arr[size] == x)
            return size;
        else
            rec = elmntSrch(arr, size, x);
    }
    else
        return -1;
 
    return rec;
}
 
int main(void) {
    int arr[] = {12, 34, 54, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int indx;
 
      indx = elmntSrch(arr, size, x);
 
    if (indx != -1)
        cout << "Element " << x << " is present at index " << indx << endl;
    else
        cout << "Element " << x << " is not present" << endl;
 
    return 0;
}
 
// This code is contributed Yuvraj Chandra
