#include <stdio.h>
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
} //returns a

/*
//goes through each node in the list and frees memory
//returns pointer to the beginning of the list (NULL)
struct node* free_list(struct node* pointer){
  while (pointer){

  }
} */

//testing
int main(){
  struct node head = {0, NULL};
  struct node* p = &head;
  struct node* l = insert_front(p, 1);
  //p = insert_front(p, 2);
  //p = insert_front(p, 3);
  print_list(l);
  printf("I work up to here\n");
  return 0;
}
