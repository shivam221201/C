/*
 * C Program to Implement Doubly Linked List using Singly Linked List 
 */
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int num;
    struct node *next;
};
 
void create(struct node **);
void move (struct node *);
void release(struct node **);
void display(struct node *);
 
int main()
{
    struct node *p = NULL, *q = NULL;
    void move(struct node *head)
{
                                                // necessary changes made
    struct node *p, *q;
    int ch;
   p = q = head;
    printf("\nPointer at %d\n", head->num);
    do
    {
        printf("Select option:\n1. Move front\n2. Move back\n3. Exit\nYour choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1: if(q->next != NULL)
                {
                    q = q->next;
                    printf("\nPointer at %d\n", q->num);
                }
                else
                {
                    printf("\nPointer at last node %d. Cannot move ahead.\n", q->num);
                }
                break;
        case 2: while (p->next != q)
                {
                    p = p->next;
                }
                if (p == q)
                {
                    printf("\nPointer at first node %d. Cannot move behind.\n", q->num);
                }
                else
                {
                    q = p;
                    p = head;
                    printf("\nPointer at %d\n", q->num);
                }
                break;
        case 3: return;
        default: printf("\nInvalid choice entered. Try again\n");
        }
    } while (1);
}
 //add sauarbh dimri
void create(struct node **head)
{
    int c, ch;

 //add sajal sood
void display(struct node *head)
{
 
void release(struct node **head)
{
    struct node *temp;
    while ((*head) != NULL)
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
}
