#include <stdio.h>
#include "stack.h"

int main() {
    stack_init();

    stack_push(5);
    stack_push(10);
    stack_push(15);

    printf("Current stack count: %d\n", stack_count());

    stack_add();

    printf("Current stack count: %d\n", stack_count());

    stack_clear();

    printf("Is stack empty? %s\n", stack_empty() ? "Yes" : "No");

    return 0;
}

