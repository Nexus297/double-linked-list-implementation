#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* prev;
    struct Node* next;
} Node;

Node* new_Node(int val);
Node* insert_head(Node* head, int val);
Node* insert_tail(Node* head, int val);
void trav_f(Node* head);
void trav_b(Node* head);

int main()
{
    Node* head = NULL;
    
    head = insert_head(head, 6);
    head = insert_head(head, 12);
    
    head = insert_tail(head, 145);
    head = insert_tail(head, 70);
    
    trav_f(head);
    trav_b(head);
    
    return 0;
}

Node* new_Node(int val)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    if (!newNode)
    {
        return NULL;
    }
    
    newNode->val = val;
    newNode->prev = newNode->next = NULL;
    
    return newNode;
}

Node* insert_head(Node* head, int val)
{
    Node* newNode = new_Node(val);
    
    if (!newNode)
    {
        return head;
    }
    
    newNode->next = head;
    
    if (head)
    {
        head->prev = newNode;
    }
    
    return newNode;
}

Node* insert_tail(Node* head, int val)
{
    Node* newNode = new_Node(val);
    
    if (!newNode)
    {
        return head;
    }
    else if (!head)
    {
        return newNode;
    }
    
    Node* tmp = head;
    
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    
    tmp->next = newNode;
    newNode->prev = tmp;
    
    return head;
}

void trav_f(Node* head)
{
    Node* tmp = head;
    
    while (tmp)
    {
        printf("%d -> ", tmp->val);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

void trav_b(Node* head)
{
    if (!head)
    {
        return;
    }
    
    Node* tmp = head;
    
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    
    while (tmp)
    {
        printf("%d -> ", tmp->val);
        tmp = tmp->prev;
    }
    printf("NULL\n");
}
