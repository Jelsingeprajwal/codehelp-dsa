// Lecture 62

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

void inOrder(BinaryTreeNode<int> *root, int &count)
{ // LNR
    // base case
    if (root == NULL)
    {
        return;
    }


    inOrder(root->left, count);
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    inOrder(root->right,count);
    return;
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.

    int cnt = 0;
    inOrder(root, cnt);

    return cnt;

}