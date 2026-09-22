#include <stdio.h>
int main()
{
    int a[100], b[10][10];
    int n, rows, cols;
    int i, j;
    printf("Enter size of 1D array: ");
    scanf("%d", &n);
    printf("Enter elements of 1D array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("1D Array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\nEnter rows and columns of 2D array: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of 2D array:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("2D Array is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
