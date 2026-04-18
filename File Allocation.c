//To Implement file allocation techniques for efficient file storage and retrieval.

#include <stdio.h>

void contiguous()
{
    int start, length;
    printf("\nEnter starting block: ");
    scanf("%d", &start);

    printf("Enter length of file: ");
    scanf("%d", &length);

    printf("Blocks allocated: ");
    for(int i = 0; i < length; i++)
        printf("%d ", start + i);
    printf("\n");
}

void linked()
{
    int n, blocks[20];
    printf("\nEnter number of blocks: ");
    scanf("%d", &n);

    printf("Enter block numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &blocks[i]);

    printf("Linked Allocation: ");
    for(int i = 0; i < n; i++)
    {
        if(i != n - 1)
            printf("%d -> ", blocks[i]);
        else
            printf("%d", blocks[i]);
    }
    printf("\n");
}

void indexed()
{
    int n, index, blocks[20];
    printf("\nEnter index block: ");
    scanf("%d", &index);

    printf("Enter number of blocks: ");
    scanf("%d", &n);

    printf("Enter block numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &blocks[i]);

    printf("Index Block: %d\n", index);
    printf("Blocks: ");
    for(int i = 0; i < n; i++)
        printf("%d ", blocks[i]);
    printf("\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- File Allocation Techniques ---\n");
        printf("1. Contiguous Allocation\n");
        printf("2. Linked Allocation\n");
        printf("3. Indexed Allocation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: contiguous(); break;
            case 2: linked(); break;
            case 3: indexed(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}

/*Output -

--- File Allocation Techniques ---
1. Contiguous Allocation
2. Linked Allocation
3. Indexed Allocation
4. Exit
Enter your choice: 1

Enter starting block: 5
Enter length of file: 4
Blocks allocated: 5 6 7 8*/
