#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[minIndex])
        {
            minIndex = i;
        }
        if (a[i] > a[maxIndex])
        {
            maxIndex = i;
        }
    }

    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}