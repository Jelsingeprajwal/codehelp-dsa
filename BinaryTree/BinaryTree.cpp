#include <iostream>
#include <queue>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data for node: " << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting at left:" << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting at right:" << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// Level order traversal

void levelOrderTraversal(node *root)
{

    queue<node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            { // there are still elements in tree
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(node *root)
{ // LNR
    // base case
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << "->";

    inOrder(root->right);
    return;
}
void preOrder(node *root)
{ // NLR
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << "->";
    preOrder(root->left);
    preOrder(root->right);
    return;
}
void postOrder(node *root)
{ // LRN
    // base case
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << "->";
    return;
}

node createUsingLevelOrder(node* &root)
{
    queue<node *> q;
    int data;
    cout << "Enter the data for node: " << endl;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    // root = buildTree(root);

    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // levelOrderTraversal(root);

    // // inorder traversal
    // cout << "inorder traversal: ";
    // inOrder(root);
    // cout << "NULL" << endl;

    // // preorder traversal
    // cout << "preorder traversal: ";
    // preOrder(root);
    // cout << "NULL" << endl;

    // // postorder traversal
    // cout << "postorder traversal: ";
    // postOrder(root);
    // cout << "NULL" << endl;

    createUsingLevelOrder(root);
    levelOrderTraversal(root);
    return 0;
}