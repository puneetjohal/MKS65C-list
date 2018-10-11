#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//takes a point to a node struct and prints all data in the list
void print_list(struct node* pointer){
  while (pointer){
    printf("%d ", pointer->i);
    pointer = pointer->next;
  }
  printf("\n");
}

//creates new node and adds it to the beginning of the list
//returns pointer to the beginning of the list
struct node* insert_front(struct node* pointer, int i){
  struct node* newHead = (struct node*)malloc(sizeof(struct node));
  newHead->i = i;
  newHead->next = pointer;
  return newHead;
}

//goes through each node in the list and frees memory
//returns pointer to the beginning of the list (NULL)
struct node* free_list(struct node* pointer){
  struct node* toBeFreed = pointer;
  struct node* nextNode;
  while (toBeFreed != NULL){
    nextNode = toBeFreed->next;
    free(toBeFreed);
    toBeFreed = nextNode;
  }
  toBeFreed = NULL;
  return toBeFreed;
} //core dump???

//testing
int main(){
  struct node *p = (struct node*)malloc(sizeof(struct node)); //allocates memory
  struct node head = {1, NULL};
  printf("Original: ");
  print_list(p);
  printf("Inserting values... \n");
  p = insert_front(p, 2);
  p = insert_front(p, 3);
  p = insert_front(p, 4);
  print_list(p);
  printf("Freeing memory... leads to a core dump?\n");
  //p = free_list(p);
  //print_list(p);
  return 0;
}
