#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int n;
    struct node* next;
}
node;

node* head = NULL;

void insert_beginning(int n)
{
    node* new = malloc(sizeof(node));
    
    if (new == NULL)
    {
        exit(1);
   }
   
   new->n = n;
   new->next = NULL;
   
   new->next = head;
   head = new;
}

void print_list(void)
{
    node* ptr = head;
    
    while (ptr != NULL)
    {
        printf("%d\n", ptr->n);
        
        ptr = ptr->next;
    }
}

void clear_list(void)
{
    node* holder;
    for (node* ptr = head; ptr != NULL; )
    {
        holder = ptr->next;
        free(ptr);
        ptr = holder;
    }
}

int main(void)
{
    insert_beginning(3);
    insert_beginning(1);
    insert_beginning(5);
    
    print_list();

    clear_list();
}
