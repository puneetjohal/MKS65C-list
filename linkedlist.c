#include <stdio.h>
#include "linkedlist.h"

//takes a point to a node struct and prints all data in the list
void print_list(struct node* pointer){
  while (pointer->next){
    printf("%d ", pointer->i);
    pointer = pointer->next;
  }
}

//creates new node and adds it to the beginning of the list
//returns pointer to the beginning of the list
struct node* insert_front(struct node* pointer, int i){
  struct node newHead = {i, pointer};
  struct node* newHeadP = &newHead;
  return newHeadP;
}

//testing
int main(){
  struct node head = {0, NULL};
  struct node* p = &head;
  //p = insert_front(p, 1);
  //p = insert_front(p, 2);
  //p = insert_front(p, 3);
  print_list(p);
  printf("I work");
  return 0;
}
