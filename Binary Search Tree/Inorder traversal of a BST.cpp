#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *createNewNode(int value) {
    Node *temp = new Node;
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

Node *newNode(Node *root, int data) {
    if (root == NULL)
        root = createNewNode(data);
    else if (data < root->data)
        root->left = newNode(root->left, data);
    else
        root->right = newNode(root->right, data);

    return root;
}


 // } Driver Code Ends
// User function Template for C++

// Function to return a list containing the inorder traversal of the BST.
vector<int> inOrder(Node *root) {
    vector<int> res;
    
    stack<Node*> s;
    Node *curr = root;
 
    while (curr != NULL || s.empty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
 
        res.push_back(curr->data);

        curr = curr->right;
 
    }
    
    return res;
}

// { Driver Code Starts.

int main() {

    int testcases;
    cin >> testcases;
    while (testcases--) {
        Node *root = NULL;
        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++) cin >> arr[i];

        for (int i = 0; i < sizeOfArray; i++) {
            root = newNode(root, arr[i]);
        }

        vector<int> res = inOrder(root);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
