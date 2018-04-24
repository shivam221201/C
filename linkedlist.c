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
 //add sauarbh dimri
void create(struct node **head)
{
    int c, ch;

 //added sajal sood
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->num);
        head = head->next;
    }
    printf("\n");
}
 
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
