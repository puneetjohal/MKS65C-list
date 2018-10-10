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
  struct node newHead = {i, pointer};
  struct node* newHeadP = &newHead;
  return newHeadP;
} //returns segmentation fault?

//goes through each node in the list and frees memory
//returns pointer to the beginning of the list (NULL)
struct node* free_list(struct node* pointer){
  struct node* nextnode;
  while (pointer){
    nextnode = pointer->next;
    free(pointer);
    pointer = nextnode;
  }
}

//testing
int main(){
  struct node *p = (struct node*)malloc(sizeof(struct node));
  struct node head = {0, NULL};
  p = &head;
  //p = insert_front(p, 1);
  //p = insert_front(p, 2);
  //p = insert_front(p, 3);
  print_list(p);
  printf("I work up to here\n");
  return 0;
}
