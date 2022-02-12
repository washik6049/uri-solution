#include <stdio.h>

int main()
{
    int D, Y, M;

    scanf("%d", &D);

    Y = (D/365);

    D = D - (Y * 365);

    M = (D/30);

    D = D - (M * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Y, M, D);

    return 0;
}
