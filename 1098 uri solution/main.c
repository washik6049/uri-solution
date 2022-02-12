#include <stdio.h>

int main()
{
    float i, j;
    int x, y;

    for(i=0; i<2.2; i+=.2)
    {
        for(j=1; j<=3; j++)
        {
            if(i>0.0 && i<1.0)
            {

                printf("I=%.1f J=%.1f\n", i, j+i);

            }
            else if(i>1.0 && i<2.0)
            {

                printf("I=%.1f J=%.1f\n", i, j+i);

            }
            else
            {
                x = i;
                y = x + j;
                printf("I=%d J=%d\n", x, y);
            }
        }

    }

    return 0;
}
