#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
//linked list traversal
void LinkedListTraversal(struct node *ptr){
    while(ptr!= NULL){
        printf("Element %d\n",ptr->data);
        ptr = ptr->next;
    }
}
//IS FULL
int isFull(){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
if(ptr == NULL){
    return 1;
    
}else{
    return 0;
}
}
//IS EMPTY
int isEmpty(struct node * top){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}
//PUSH
struct node * push(struct node *top ,int x){
    if(isFull()){
       printf("OVERFLOW\n");
    }else{
       struct node *n = (struct node *) malloc(sizeof(struct node));
       n->data = x;
       n->next = top;
       top = n;
       return top;
    }
}
//POP
struct node * pop(struct node *top){
    if(isEmpty(top)){
        printf("UNDERFLOW\n");
    }else{
        struct node *p = top;
        top = p->next ;
        free(p);
        return top;
        
    }
}
//PEEK
int peek(struct node *top,int position){
    struct node * ptr = top;
    for (int i = 0; i < position-1 && ptr != NULL; i++) {
    ptr = ptr->next;
}

    if(ptr != NULL){
        return ptr->data;
    }else{
      printf("Position does not exist\n");
      return -1;
    }
    
}
//bottom element
int Bottom(struct node * top){
    struct node * p= top;
    if(isEmpty(top)){
    printf("UNDERFLOW\n");
    return NULL;
}

    while(p->next != NULL){
        p=p->next;
    }
    return p->data;
}
//TOP element
int Top(struct node *top){
    return top->data;
}


int main(){
struct node *top = NULL; // impies that the linked list is empty
top = push(top,78);
top = push(top,95);
top = push(top,26);
top = push(top,9);
top = pop(top);

LinkedListTraversal(top);
//PEEK
// int position;
// printf("Enter a postion at which an element to be searched\n");
// scanf("%d",&position);
// int value = peek(top,position);
// for (int  i = 0; i < position -1; i++)
// {
//   printf(" Value  at position %d is %d: ",i,peek(i));
// }
//TOP AND BOTTOM
int topvalue= Top(top);
int bottomvalue = Bottom(top);

printf("Bottom element  is %d\n ",bottomvalue);
printf("Top element  is %d ",topvalue);

return 0;
}