#include <stdio.h>
#include <stdlib.h>
#include "Node.c"

int main(void) {
  Node* head = malloc(sizeof(Node));
  Node* n = malloc(sizeof(Node));
  n->data = 3;
  n->next = NULL;
  head->next = n;
  insertAfter(head, 5);
  insertAfter(head, 10);
  deleteList(head, 5);
  printList(head);
  return 0;
}