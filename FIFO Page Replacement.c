//To analyze page replacement policy to calculate page fault, page hit, hit ratio and miss ratios for given scenario.

#include <stdio.h>

int main()
{
    int pages[50], frame[10];
    int n, f, i, j, k, flag, count = 0, faults = 0;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for(i = 0; i < f; i++)
        frame[i] = -1;

    for(i = 0; i < n; i++)
    {
        flag = 0;

        for(j = 0; j < f; j++)
        {
            if(frame[j] == pages[i])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            frame[count] = pages[i];
            count = (count + 1) % f;
            faults++;
        }

        printf("\nFrames: ");
        for(k = 0; k < f; k++)
            printf("%d ", frame[k]);
    }

    printf("\n\nTotal Page Faults = %d", faults);
    printf("\nTotal Page Hits = %d", n - faults);

    float hit_ratio = (float)(n - faults) / n;
    float miss_ratio = (float)faults / n;

    printf("\nHit Ratio = %.2f", hit_ratio);
    printf("\nMiss Ratio = %.2f\n", miss_ratio);

    return 0;
}

/*Output -

Enter number of pages: 12
Reference string:
1 2 3 4 1 2 5 1 2 3 4 5
Frames: 3

Frames: 1 -1 -1
Frames: 1 2 -1
Frames: 1 2 3
Frames: 4 2 3
Frames: 4 1 3
Frames: 4 1 2
Frames: 5 1 2
Frames: 5 1 2
Frames: 5 1 2
Frames: 5 3 2
Frames: 5 3 4
Frames: 5 3 4

Total Page Faults = 9
Total Page Hits = 3
Hit Ratio = 0.25
Miss Ratio = 0.75*/
