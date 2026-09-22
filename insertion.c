#include <stdio.h>
void insert(int a[], int *n, int pos, int value)
{
    int i;
    for(i = *n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    (*n)++;
}
int main()
{
    int a[100], n, i, pos, value;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);
    insert(a, &n, pos, value);
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
