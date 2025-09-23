#include <stdio.h>
int     main()
{
        float   rayon;
        const float     P = 3.14;
        float   v;
	
	printf("enter le rayon :");
	scanf("%f",&rayon);
        v = (4.0f / 3.0f) * P * rayon * rayon * rayon;
        printf("%f",v);
}
