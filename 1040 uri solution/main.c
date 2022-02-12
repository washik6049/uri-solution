#include <stdio.h>
int main()
{
    double N1, N2, N3, N4, m, n, l;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    m = (((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1));
    printf("Media: %.1lf\n", m);
    if(m>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(m>=5.0 && m<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &n);
        printf("Nota do exame: %.1lf\n", n);
        l = ((m+n)/2);
     if(l>=5.0)
    {
        printf("Aluno aprovado.\n");
         printf("Media final: %.1lf\n", l);
    }
    else
    {
        printf("Aluno reprovado.\n");
         printf("Media final: %.1lf\n", l);
    }

    }
     else if(m<=5.0)
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
