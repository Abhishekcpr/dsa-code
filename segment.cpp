// segment tree implementation to find and update given range of array
// elements :
#include <bits/stdc++.h>
using namespace std;

struct tree
{
    int l, r;
    int sum = 0;
    tree *left, *right;
};

tree* createTree(tree* root, int a[], int l, int r)
{
    if (l == r)
    {
        tree* temp = new tree();
        temp->sum = a[l];
        temp->left = temp->right = NULL;
        return temp;
    }
    int mid = (l + r) / 2;
    if (root == NULL)
    {
        tree* temp = new tree();
        root = temp;
    }
    root->left = createTree(root->left, a, l, mid);
    root->right = createTree(root->right, a, mid + 1, r);

    root->sum = root->left->sum + root->right->sum;
    return root;
}

int getSum(tree* root, int l , int r, int A[])
{
    if( l >= root->l && r<= root->r)
    {
        return 
    }
}

void preOrder(tree *root)
{
    if (!root)
        return;

    cout << root->sum << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    tree* root = NULL;

    int Array[] = {1, 3, 7, 6};
    root = createTree(root, Array, 0, 3);

    preOrder(root);

    return 0;
}

