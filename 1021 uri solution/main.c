#include <stdio.h>
int main()
{
    double N;
    int a, x, d, y;
    scanf("%lf", &N);
    a = (int)N;
    x = ((N-a)*100);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a/100);
    d = (a%100);
    printf("%d nota(s) de R$ 50.00\n", d/50);
    d = (d%50);
    printf("%d nota(s) de R$ 20.00\n", d/20);
    d = (d%20);
    printf("%d nota(s) de R$ 10.00\n", d/10);
    d = (d%10);
    printf("%d nota(s) de R$ 5.00\n", d/5);
    d = (d%5);
    printf("%d nota(s) de R$ 2.00\n", d/2);
    printf("MOEDAS:\n");
    d = (d%2);
    printf("%d moeda(s) de R$ 1.00\n", d/1);
    printf("%d moeda(s) de R$ 0.50\n", x/50);
    y = (x%50);
    printf("%d moeda(s) de R$ 0.25\n", y/25);
    y = (y%25);
    printf("%d moeda(s) de R$ 0.10\n", y/10);
    y = (y%10);
    printf("%d moeda(s) de R$ 0.05\n", y/5);
    y = (y%5);
    printf("%d moeda(s) de R$ 0.01\n", y/1);
    return 0;
}
