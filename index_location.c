#include <stdio.h>
int main()
{
    int array[100], search, c, n;
    scanf("%d", &search);
    scanf("%d", &n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search)   
        {
            printf("%d",c);
            break;
        }
    }
    return 0;
}
