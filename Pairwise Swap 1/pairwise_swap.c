#include <stdio.h>
#include <stdlib.h>
 
struct node 
{
    int data;
    struct node* next;
};
struct node* pairWiseSwap(struct node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
    struct node* remaing = head->next->next;
    struct node* newhead = head->next;
    head->next->next = head;
    head->next = pairWiseSwap(remaing);
    return newhead;
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct node* node)
{
    while (node != NULL) 
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main()
{
    struct node* start = NULL;
    int ul,ll;
    scanf("%d", &ul);
    scanf("%d", &ll);
    for(int i=ul;i>ll;i--)
        push(&start, i);
    printList(start);
    start = pairWiseSwap(start);
    printf("\n");
    printList(start);
    return 0;
}
