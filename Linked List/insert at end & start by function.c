#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
};
void insertStart (struct Node **head, int data){
  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;
}
void insertLast (struct Node **head, int data){
  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
  newNode->data = data;
  newNode->next = NULL;
  if (*head == NULL){
      *head = newNode;
      return;
    }
  struct Node *temp = *head;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;
}
void display (struct Node *node)
{
  while (node != NULL){
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}
int main (){
  struct Node *head = NULL;
  insertStart (&head, 12);
  insertStart (&head, 16);
  insertStart (&head, 20);
  insertLast (&head, 10);
  insertLast (&head, 14);
  insertLast (&head, 18);
  insertLast (&head, 11);
  display (head);
  return 0;
}
