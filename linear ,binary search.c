#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int num;
    printf("Enter number of elements you want to unsert in an array\n");
    scanf("%d", &num);

    int arr[num];
    printf("Enter %d elements:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter an element to be searched:");
    scanf("%d", &element);

    int found = linearSearch(arr, num, element);
    if (found != -1)
    {
        printf("Element %d is found at index %d", element, found);
    }
    else
    {
        printf("Element %d i snit found in array\n", element);
    }
    return 0;
}