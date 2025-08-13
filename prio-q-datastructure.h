/* 
Name: Sushruit Chandra 

This file is the header file for the data structure of the priority queue
The strucutre use for a priority queue is a binary search tree 
*/

/* Node of a BST 
   contains the priority and string data */
typedef struct node {
  unsigned int priority;
  char *str;
  struct node *left;
  struct node *right;
} Node;

/* priority queue structure*/
typedef struct prio_que {
  Node *head;
  int size;  /* size of the queue*/
} Prio_que;
