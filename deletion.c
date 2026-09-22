#include <stdio.h>
void deleteElement(int a[], int *n, int pos)
{
    int i;
    for(i = pos - 1; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}
int main()
{
    int a[100], n, i, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    deleteElement(a, &n, pos);
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
