#include <stdio.h>
int main()
{
    int choice;
    printf("Data Structures:\n");
    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Graph\n");
    printf("4. Tree\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("\nData Structure: Array\n");
            printf("An array stores elements of the same data type.\n");
            printf("Elements are stored in contiguous memory locations.\n");
            break;
        case 2:
            printf("\nData Structure: Linked List\n");
            printf("A linked list consists of nodes connected using pointers.\n");
            printf("Each node contains data and a pointer to the next node.\n");
            break;
        case 3:
            printf("\nData Structure: Graph\n");
            printf("A graph consists of vertices and edges.\n");
            printf("It can be directed or undirected.\n");
            break;
        case 4:
            printf("\nData Structure: Tree\n");
            printf("A tree is a hierarchical data structure.\n");
            printf("It consists of nodes connected by edges.\n");
            break;
        default:
            printf("\nInvalid choice!\n");
    }
    return 0;
}

}
