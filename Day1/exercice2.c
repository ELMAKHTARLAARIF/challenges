#include <stdio.h>
int     main()
{
        float   rayon = 10;
        const float     P = 3.14;
        float   v;

        v = (4.0f / 3.0f) * P * rayon * rayon * rayon;
        printf("%f",v);
}
