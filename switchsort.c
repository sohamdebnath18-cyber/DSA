#include <stdio.h>
void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void modifiedBubbleSort(int a[], int n)
{
    int i, j, temp, swapped;
    for(i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
    }
}
void insertionSort(int a[], int n)
{
    int i, j, key;
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
void modifiedSelectionSort(int a[], int n)
{
    int i, j, min, max, temp;
    for(i = 0; i < n / 2; i++)
    {
        min = i;
        max = i;
        for(j = i + 1; j < n - i; j++)
        {
            if(a[j] < a[min])
                min = j;
            if(a[j] > a[max])
                max = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        if(max == i)
            max = min;
        temp = a[n - i - 1];
        a[n - i - 1] = a[max];
        a[max] = temp;
    }
}
int main()
{
    int a[100], n, i, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n----- SORTING MENU -----\n");
    printf("1. Bubble Sort\n");
    printf("2. Modified Bubble Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Selection Sort\n");
    printf("5. Modified Selection Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            bubbleSort(a, n);
            printf("Bubble Sort: ");
            break;
        case 2:
            modifiedBubbleSort(a, n);
            printf("Modified Bubble Sort: ");
            break;
        case 3:
            insertionSort(a, n);
            printf("Insertion Sort: ");
            break;
        case 4:
            selectionSort(a, n);
            printf("Selection Sort: ");
            break;
        case 5:
            modifiedSelectionSort(a, n);
            printf("Modified Selection Sort: ");
            break;
        default:
            printf("Invalid choice!");
            return 0;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

}
