#ifndef STACK_H
#define STACK_H

typedef int stack_data;

void stack_init();
void stack_clear();
int stack_empty();
void stack_push(stack_data d);
stack_data stack_pop();
void stack_dup();
int stack_count();
void stack_add();

#endif /* STACK_H */

