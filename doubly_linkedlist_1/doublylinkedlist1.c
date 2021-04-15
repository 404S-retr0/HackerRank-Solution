#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;   
};
void reverse(struct Node **head_ref)
{
     struct Node *temp = NULL; 
     struct Node *current = *head_ref;
     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;             
       current = current->prev;
     }     
     if(temp != NULL )
        *head_ref = temp->prev;
}    
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);   
    if((*head_ref) !=  NULL)
      (*head_ref)->prev = new_node ;   
    (*head_ref)    = new_node;
}
void printList(struct Node *node)
{
  while(node!=NULL)
  {
   printf("%d ", node->data);
   node = node->next;
  }
}
int main()
{
  struct Node* head = NULL;
  int n,input=0;
  scanf("%d", &n);
  for(int i=0;i<n;i++)
  {
    scanf("%d", &input);
    push(&head, input);
  }
  printf("Original linked list\n");
  reverse(&head);
  //NOTE:-as per question i had to reverse the original linked list and then consider as them original linked list.
  //NOTE:-mistake in displaying linked list the given question example.
  printList(head);
  reverse(&head);
  printf("\nThe reversed Linked List is\n");
  printList(head);          
  return 0;
}
