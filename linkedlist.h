#include <stdio.h>

//prototype
struct node {int i; struct node* next};

//constructs node
struct node construct();

//takes a point to a node struct and prints all data in the list
void print_list(struct node* pointer);

//creates new node and adds it to the beginning of the list
//returns pointer to the beginning of the list
struct node* insert_front(struct node* pointer, int i);

//goes through each node in the list and frees memory
//returns pointer to the beginning of the list (NULL)
struct node* free_list(struct node* pointer);
