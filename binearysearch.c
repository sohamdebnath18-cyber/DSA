#include <stdio.h>
int binarySearch(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int a[100], n, i, key, result;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = binarySearch(a, n, key);
    if(result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");
    return 0;
}
