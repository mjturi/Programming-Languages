/*
Student Name: Matthew Turi
ID: 822202323
CS 320 
*/

#include <stdio.h>
/*
Created a stack structure with a create function to intialize top
and the push/pop functions needed 
All functions for the stack use a pointer to change the original 
stack[] and top values
"*" for multiplication was replaced with "$" 
*/
struct stack {
    int top;
    int stack[100];
};
 
void createStack(struct stack *ptr){
    ptr->top = -1;
}

void push(int num, struct stack *ptr){
    ptr->top = ptr->top + 1;
    ptr->stack[ptr->top] = num;
}

int pop(struct stack *ptr){
    int num = ptr->stack[ptr->top];
    ptr->top = ptr->top - 1;
    return num;
}

int main (int argc, char *argv[]){
    struct stack *storage;
    createStack(storage);
    int i;
        for (i = 1; i < argc; i++){
            if (strcmp(argv[i], "$") == 0 || strcmp(argv[i], "-") == 0 || strcmp(argv[i], "+") == 0  || strcmp(argv[i], "/") == 0) {
               int right_arg = pop(storage);
               int left_arg = pop(storage);
               int answer;
               if (strcmp(argv[i], "+") == 0){
                   answer = left_arg+right_arg;
                   push(answer, storage);
               }
               else if (strcmp(argv[i], "-") == 0) {
                   answer = left_arg-right_arg;
                   push(answer, storage);
               }
               else if (strncmp(argv[i], "$") == 0) {
                   answer = right_arg * left_arg;
                   push(answer, storage);
               }
               else if (strcmp(argv[i], "/") == 0) {
                   answer = left_arg/right_arg;
                   push(answer, storage);
               }
            }
            else {
                int arg = atoi(argv[i]);
                push(arg, storage);
            }
    }
    int final_solution = pop(storage);
    printf("Stack holds: %d\n", final_solution);
}
