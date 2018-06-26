#include<stdio.h>
#include "DNode.c"
int main(){
    DNode *head = malloc(sizeof(DNode));
    head->next = NULL;
    head->prior = NULL;
    insertBeforeDNode(head,5);
    insertBeforeDNode(head,10);
    printDList(head);
    printDListR(head);
    return 0;
}