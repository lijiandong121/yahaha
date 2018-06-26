#include<stdio.h>
typedef struct DNode {
    struct DNode *prior;
    struct DNode *next;
    int data;
} DNode;

void insertBeforeDNode(DNode *head, int ele){
    DNode *newNode = malloc(sizeof(DNode));
    newNode->data = ele;
    newNode->next = head->next;
    head->next = newNode;
    head->next->prior = head;
    if(newNode->next != NULL){
        newNode->next->prior = newNode;
    }
}

void printDList(DNode *head) {
    DNode *tracker = head->next;
    while(tracker != NULL){
        printf("%i\n", tracker->data);
        tracker = tracker->next;
    }
}

void printDListR(DNode *head) {
    DNode *tracker = head;
    while(tracker->next != NULL){
        // printf("%i\n", tracker->data);
        tracker = tracker->next;
    }

    while(tracker->prior != NULL){
        printf("%i\n", tracker->data);
        tracker = tracker->prior;
    }
}
