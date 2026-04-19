// #include <stdio.h>

// int main()
// {
//     int a = 20;
//     int b = 10;
//     a = b;
//     b = a;

//     printf("%d\n%d", a,b);
//     return 0;
// }


#include <stdio.h>

int main()
{
    int a = 20;
    int b = 10;
    int temp = a;
    a = b;
    b = temp;

    printf("%d\n%d", a,b);
    return 0;
}