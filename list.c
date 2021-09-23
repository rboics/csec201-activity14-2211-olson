#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct linkedlist *initialize();
void add(struct linkedlist* list, int value);
void print_list(struct linkedlist *list);

struct node{
    int data;
    struct node *next;
};

struct linkedlist{
    int size;
    struct node *head;
};
// -> is used when the left is a pointer  (ptr)->member
// . is used when the left is an instance (instance).member (Used when struct instance is on stack)
struct linkedlist *initialize(){
    struct linkedlist* list = malloc(sizeof(struct linkedlist));
    list->size = 0;
    list->head = NULL;
    return list;
}

void add(struct linkedlist* list, int value)
{
    //Code to add an element to a LinkedList
    struct node * temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->next = list->head;
    list->head = temp;
    list->size++;
}
void print_list(struct linkedlist *list)
{
    //Code to print a LinkedList
    struct node * temp = list->head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp-> next;
    }
}

void print_reverse(struct linkedlist *list)
{

}

void delete_at(struct linkedlist * list, int val)
{

}

void delete_all(struct linkedlist * list, int val)
{

}

int main()
{
        struct linkedlist * L = initialize();
        add(L, 10);
        add(L, 12);
        add(L, 13);
        print_list(L);

}


