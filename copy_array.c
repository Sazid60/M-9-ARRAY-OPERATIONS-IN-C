#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int copy_size = n+m;

    int copy[copy_size];
    for(int i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }
    for(int i = 0; i < m; i++)
    {
        copy[n+i] = b[i];
    }
    for(int i = 0; i < copy_size; i++)
    {
        printf("%d ", copy[i]);
    }
    return 0;
}