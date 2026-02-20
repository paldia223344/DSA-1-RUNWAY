#include <stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
 int peek(struct stack *sp,int index){
    if(sp->top-index+1  < 0){
         return -1;
    }else{
        return sp->arr[sp->top-index+1];
    }
 }

// STACK IS FULL 
int isFull(struct stack *p){
if(p->top == p->size-1){
    return 1; // stack is full
}else{
    return 0;// stack is not full
}}

//STACK IS EMPTY
int isEmpty(struct stack *p){
    if(p->top == -1){
        return  1 ; // stack is empty
    }else{
        return 0; // stack is not empty
    }
}
// POP OPEARTION
int pop(struct stack *p){
if(isEmpty(p)){
    printf("STACK UNDERFLOW\n");
}else{
    int value = p->top;
    p->top = p->top-1;
    return value;
}}

//PUSH
void push_operation(struct stack *p,int element){
    if(isFull(p)){
        printf("STACK OVERFLOW\n");
    }else{
        p->top++;
        p->arr[p->top] = element;
    }
}

//TOP VALUE OF THE STACK
int isTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}

// BOTTOM VALUE OF THE STACK
int isBttom(struct stack *ptr){
    return ptr->arr[0];
}

int main() {
    int s ;
    printf("Enter size of a stack array\n");
    scanf("%d ",&s);
    struct stack *sp = (struct stack *) malloc(sp->size * sizeof(struct stack));
    sp->size = s;
    sp->top=-1;
    sp->arr = (int *) malloc(sizeof(int));
    printf("STACK IS SSUCCESSFULLY CREATED\n");
   printf("STACK BEFORE PUSHING ,full: %d",isEmpty(sp));
   printf("STACK BEFORE PUSHING ,full: %d",isFull(sp));
// int  position;
// printf("Enter aposition at which you want to find the value\n");
// scan0("%d",&position);
// peek(sp,position);
// printf("value at position %d is %d",position,peek(return));
// printing value from the stack
for ( int j =0; j<=sp->top+1 ; j++){
    printf("Value at index %d is %d\n",j,peek(sp,j));
}

//is bottom and istop

printf("Top value of the stack is %d\n",isTop(sp));
printf("The bottom value of the syack is %d",isBttom(sp));
    return 0;
}