#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int a[], int n)
{
    int i;
    for(i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            swap(&a[i], &a[i + 1]);
        }
    }
}
int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j;
    for(j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return i + 1;
}
void quickSort(int a[], int low, int high)
{
    int pi;
    if(low < high)
    {
        pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}
void display(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[10] = {64, 25, 12, 22, 11, 90, 45, 33, 78, 5};
    printf("Original Array: ");
    display(a, 10);
    bubbleSort(a, 10);
    printf("After One Pass Bubble Sort: ");
    display(a, 10);
    quickSort(a, 0, 9);
    printf("Sorted Array: ");
    display(a, 10);
    return 0;
}
