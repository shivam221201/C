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
//add rachit chauhan
    struct node *p, *q;
    int ch;
}
//REquired code has been added by SAurabh
{
    int c, ch;
    struct node *temp, *rear;
 
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}

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
