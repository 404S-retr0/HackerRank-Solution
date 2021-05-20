#include <stdio.h>
#include <stdlib.h>
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;
void insert();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);
void postorder(struct btnode *t);
int main()
{
    char ch = 'y';
    do
    {
        insert();
        scanf(" %c", &ch);
    }while(ch == 'y');   
    printf("Preorder Traversal: ");
    preorder(root);
    printf("\nInorder Traversal: ");
    inorder(root);
    /*printf("\nPostorder Traversal: ");
    postorder(root);*/
    return 0;
}
void insert()
{
    create();
    if (root == NULL) 
        root = temp;
    else    
        search(root);    
}
void create()
{
    int data;
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}
void search(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
        search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
        search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}
void inorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (t->l != NULL)    
        inorder(t->l);
    printf("%d ", t->value);
    if (t->r != NULL)    
        inorder(t->r);
}
void preorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    printf("%d ", t->value);
    if (t->l != NULL)    
        preorder(t->l);
    if (t->r != NULL)    
        preorder(t->r);
}
/*void postorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display ");
        return;
    }
    if (t->l != NULL) 
        postorder(t->l);
    if (t->r != NULL) 
        postorder(t->r);
    printf("%d ", t->value);
}*/
