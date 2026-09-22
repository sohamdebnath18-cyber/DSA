#include <stdio.h>
int binarySearch(int a[], int low, int high, int key)
{
    if(low > high)
        return -1;
    int mid = (low + high) / 2;
    if(a[mid] == key)
        return mid;
    if(a[mid] < key)
        return binarySearch(a, mid + 1, high, key);
    return binarySearch(a, low, mid - 1, key);
}
int main()
{
    int a[100], n, i, key, result;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = binarySearch(a, 0, n - 1, key);
    if(result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");
    return 0;
