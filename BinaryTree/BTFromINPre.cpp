// Class that contains the logic to build the binary tree
/*
Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to build the tree from given inorder and preorder traversals
    
    int findPos(int in[],int element, int n){
        for(int i = 0; i<n;i++){
            if(in[i]==element){
                return i;
            }
        }
        return -1;
    }
    Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n){
        if(index >= n || inorderStart>inorderEnd){
            return NULL;
        }
        int element = pre[index++];
        
        Node* root = new Node(element);
        int position = findPos(in, element, n);
        
        // recursive
       root->left = solve(in,pre,index,inorderStart, position-1, n);
       root->right = solve(in,pre,index, position+1,inorderEnd, n);
       
       return root;
        
    }
    
    Node *buildTree(int &inorder, int &preorder) {
        // code here
        int preOrderIndex = 0;
       Node* ans =  solve(inorder, preorder,preOrderIndex,0,n-1, n);
        return ans;
    }
};