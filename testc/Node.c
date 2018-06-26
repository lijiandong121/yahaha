#include <stdio.h>
#include "Node.h"
void insertBefore(Node *n, int ele){
    Node* newNode = malloc(sizeof(Node));
    newNode->data = ele;
    newNode->next = n->next;
    n->next = newNode;
}

void insertAfter(Node *head, int ele){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = ele;
    newNode->next = NULL;
    Node *tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = newNode;
}

int deleteList(Node *head, int ele) {
    Node *tracker = head;
    Node *toDelete = NULL;
    while(tracker->next != NULL) {
        if(tracker->next->data == ele){
            toDelete = tracker->next;
            tracker->next = tracker->next->next;
                        free(toDelete);

            return 1;
        }
        tracker = tracker->next;
    }
    return 0;
}

void printList(Node *n){
    Node *temp = n->next;
    while(temp != NULL) {
        printf("%i\n", temp->data);
        temp = temp->next;
    }
}