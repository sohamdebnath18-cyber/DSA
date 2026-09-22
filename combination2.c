#include <stdio.h>
void insertionSort(int arr[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = arr[step];
        int j = step - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int binarySearch(int arr[], int n, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (x == arr[mid])
            return mid;
        if (x > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {7, 12, 6, 10, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    printf("Original Array = ");
    display(arr, size);
    printf("Element = %d\n", x);
    insertionSort(arr, size);
    printf("Sorted Array = ");
    display(arr, size);
    int result = binarySearch(arr, size, 0, size - 1, x);
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found.\n");
    return 0;
}
