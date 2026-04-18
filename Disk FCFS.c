//To apply disk scheduling algorithm to calculate total disk head movement for given situation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int request[50];
    int head, total_movement = 0;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    printf("Enter request sequence:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &request[i]);

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("\nSeek Sequence: %d", head);

    for(i = 0; i < n; i++)
    {
        total_movement += abs(request[i] - head);
        head = request[i];
        printf(" -> %d", head);
    }

    printf("\n\nTotal Head Movement = %d\n", total_movement);

    return 0;
}

/*Enter number of requests: 8
Request sequence:
98 183 37 122 14 124 65 67
Initial head position: 53

Seek Sequence: 53 -> 98 -> 183 -> 37 -> 122 -> 14 -> 124 -> 65 -> 67

Total Head Movement = 640*/
