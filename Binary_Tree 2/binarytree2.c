#include<stdio.h>
#include<stdlib.h>

struct TNode
{
    int data;
    struct TNode* left;
    struct TNode* right;
};
  
struct TNode* newNode(int data);

struct TNode* sortedArrayToBST(int arr[], int start, int end)
{

    if (start > end)
      return NULL;
  
    int mid = (start + end)/2;
    struct TNode *root = newNode(arr[mid]);
  
    root->left =  sortedArrayToBST(arr, start, mid-1);
  
    root->right = sortedArrayToBST(arr, mid+1, end);
  
    return root;
}
  
struct TNode* newNode(int data)
{
    struct TNode* node = (struct TNode*)
                         malloc(sizeof(struct TNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
  
    return node;
}
  
void preOrder(struct TNode* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
  
int main()
{
    int t,n=0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        struct TNode *root = sortedArrayToBST(arr, 0, n-1);
        preOrder(root);
    }
 
    return 0;
}
