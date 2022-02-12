#include <stdio.h>
int main()
{
    double N,a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lf", &N);
    if(N>=0.00 && N<=2000.00)
    {
        printf("Isento\n");
    }
    else if(N>=2000.01 && N<=3000.00)
    {
        a = N-2000.00;
        b = (a*.08);
        printf("R$ %.2lf\n", b);
    }
    else if(N>=3000.01 && N<=4500.00)
    {
        c = N-2000.00;
        d = c-1000.00;
        e = (1000.00*.08);
        f = e+(d*.18);
        printf("R$ %.2lf\n", f);
    }
    else if(N>=4500.01)
    {
        g = N-2000.00;
        h = g-1000.00;
        i = h-1500.00;
        j = (1000.00*.08);
        k = j+(1500*.18);
        l = k+(i*.28);
        printf("R$ %.2lf\n", l);
    }
    return 0;
}
