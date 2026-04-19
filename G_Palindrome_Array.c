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

    int isPalindrome = 1;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}