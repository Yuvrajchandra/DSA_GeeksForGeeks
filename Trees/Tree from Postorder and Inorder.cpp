#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    stack<Node*> st;

    set<Node*> s;

    int postIndex = n - 1;
 
    Node* root = NULL;
    
    for (int p = n - 1, i = n - 1; p>=0; )  {
        Node* node = NULL;
        do
        {
          node = new Node(post[p]);
  
          if (root == NULL)
          {
            root = node;
          }

          if (st.size() > 0) 
          {
            if (s.find(st.top()) != s.end())
            {
              s.erase(st.top());
              st.top()->left = node;
              st.pop();
            }
            else
            {
              st.top()->right = node;
            }
          }
           
          st.push(node);
           
        } while (post[p--] != in[i] && p >=0);
    
        node = NULL;
    
        while (st.size() > 0 && i>=0 && 
               st.top()->data == in[i]) 
        {
          node = st.top();
           
          // Pop elements from stack
          st.pop();
          i--;
        }
         
        // if node not equal to NULL
        if (node != NULL) 
        {
          s.insert(node);
          st.push(node);
        }
    }
    
    // Return root
    return root;
}
