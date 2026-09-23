#include <stdio.h>
int linearSearch(int a[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[100], n, i, key, result;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = linearSearch(a, n, key);
    if(result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");
    return 0;
}
