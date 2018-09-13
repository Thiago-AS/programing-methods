#ifndef STACK_LIB_INCLUDE_STACK_HPP_
#define STACK_LIB_INCLUDE_STACK_HPP_

#define ITEM_TYPE int

#include<iostream>

typedef struct StackNode {
  ITEM_TYPE data;
  struct StackNode* next_node;
} StackNode;

// typedef struct StackNode {
//   ITEM_TYPE array[max];
// } StackNode;

class Stack {
  StackNode* stack_top;
  int stack_amount;
  int stack_max_size;
 public:
  Stack() {
    stack_top = NULL;
    stack_amount = 0;
    stack_max_size = 0;
  }
  bool IsFull();
  bool IsEmpty();
  bool SetSize(int size);
  int Size();
  bool Push(ITEM_TYPE data);
  ITEM_TYPE Pop();
  ITEM_TYPE Top();
};

#endif  // STACK_LIB_INCLUDE_STACK_HPP_
