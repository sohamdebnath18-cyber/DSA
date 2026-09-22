#include <stdio.h>
int main()
{
    int choice;
    int B = 1000;
    int i = 2, j = 3;
    int LR = 0, LC = 0;
    int M = 4, N = 5;
    int W = 4;
    int LOC;
    printf("1. Row Major\n");
    printf("2. Column Major\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            LOC = B + (((i - LR) * N) + (j - LC)) * W;
            printf("Row Major Address = %d", LOC);
            break;
        case 2:
            LOC = B + (((j - LC) * M) + (i - LR)) * W;
            printf("Column Major Address = %d", LOC);
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}
