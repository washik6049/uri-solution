#include <stdio.h>
int main()
{
    int i, a=0;

    for(i=1; i<=100; i++)
    {
          if(i%2==0)
      {

       a=a+1;
      }
      printf("%d\n", a);
    }
    return 0;
}
