#include <stdio.h>

int main()
   {
     int a,b,c,d;
      printf("\nDigite o numero de vezes que a sequencia deve ser exibida:");
      scanf("%d",&d);
      b=c=1;
      printf("%d\n",b);
     for(a=0;a<=(d-1);a++)
      {
       c=b-c;
       b=c+b;
       printf("%d\n",b);
      }
 getch();    
 return 0;    
}
