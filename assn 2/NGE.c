#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *a;
    int i, j, found;

    printf("\nInput Number of elements      : ");
    scanf("%d", &n);

    printf("\n");
    a = malloc(n * sizeof(a));
    if (a == NULL)
    {
        printf("\nMemory not allocated.\n\n");
        exit(0);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Input the elements %d of Array : ", i + 1);
            scanf("%f", &a[i]);
        }
        printf("Element       NGE\n");
        for (i = 0; i < n; i++)
        {
            found = 0;
            for (j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    printf("  %g           %g\n", a[i], a[j]);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("  %g          -1\n", a[i]);
            }
        }
    }
    return 0;
}
