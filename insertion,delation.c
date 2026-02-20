#include <stdio.h>
void TRAVERSAL(int arr[], int size){
    for (int i = 0; i <= size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int INSERTION(int arr[],int size,int element,int index,int capacity){
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main() {
    int size,arr[size],capacity,element,index;
    printf("Enter capacity of an array\n");
     scanf("%d ",&capacity);
    printf("Enter number of elements you want to insert\n");
    scanf("%d ",&size);
    for (int i = 0; i <= size; i++)
    {
        scanf("%d ",&arr[i]);
    }
    printf("Enter an element to be inserted");
    scanf("%d ",&element);
    printf("Enter an index  to which the element to be inserted");
    scanf("%d ",&index);
    return 0;
}