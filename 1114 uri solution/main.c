#include <stdio.h>

int main()
{
    int x=2002, y;
    while(1)
    {
        scanf("%d", &y);
        if(y==x)
        {
            printf("Acesso Permitido\n");
            break;
        }
        if(y!=x)
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
