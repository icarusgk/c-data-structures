#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
}
node;

node *create_node(int n);

int main(void)
{
  
}

node *create_node(int n)
{
  node *new_node = malloc(sizeof(node));

  if (new_node == NULL)
  {
    return NULL;
  }
  new_node->number = n;
  new_node->next = NULL;
  
  return new_node;
}