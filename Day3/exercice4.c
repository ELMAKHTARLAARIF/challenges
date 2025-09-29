#include <stdio.h>

int main() {
    int a[10], i;
    int length = (int)(sizeof(a) / sizeof(a[0]));
    printf("enter %d nombres :\n", length);

    for (i = 0; i < length; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Dans l'ordre inverse :\n");
    for (i = length - 1; i >= 0; i--) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

