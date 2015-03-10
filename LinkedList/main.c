/**************************************************************************
 **  This file decribe that the method of swap function work.
 **  
 **  @file      main.c
 **  @author    Lider
 **  Copyright(c) 2015                           2015 Feb. 27
 *************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node * next;    
}Node;

void reverseLinkedList(Node ** head)
{
    // if the node of LinkedList is empty or only one node
    // just return
    if ((*head == NULL) || ((*head)->next == NULL))
        return;
    
    Node* cur  = *head;
    Node* tmp1 = cur->next;
    Node* tmp2 = NULL;
    

    // reverse the LinkedList
    while (tmp1 != NULL)
    {
        tmp2    = tmp1->next;
        tmp1->next = cur;
        cur     = tmp1;        
        tmp1    = tmp2;
    }

    (*head)->next = NULL;
    (*head) = cur;
}

void showLinkedList(Node* head)
{
    printf("##LIST:");
    while (head != NULL)
    {
        printf("node(%d)->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}


int main(int argc, char** argv)
{
    Node* A = (Node*) malloc(sizeof(Node));
    Node* B = (Node*) malloc(sizeof(Node));
    Node* C = (Node*) malloc(sizeof(Node));
    Node* D = (Node*) malloc(sizeof(Node));
    Node* E = (Node*) malloc(sizeof(Node));

    A->data = 1;
    A->next = B;
    B->data = 2;
    B->next = C;
    C->data = 3;
    C->next = D;
    D->data = 4;
    D->next = E;
    E->data = 5;
    E->next = NULL;
    
    showLinkedList(A); 
    reverseLinkedList(&A);
    showLinkedList(A); 

    return 0;
    
}
