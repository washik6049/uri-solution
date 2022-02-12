#include <stdio.h>

int main()

{
    int A, B, C, D, DIFERENCA;

    scanf("%d %d", &A , &B);
    scanf("%d %d", &C, &D);
    DIFERENCA = ((A * B) - (C * D));

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}
