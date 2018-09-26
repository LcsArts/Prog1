#include <stdio.h>

int main()
   {
     int i,x,y,j;
      printf("\nDigite o numero de vezes que a sequencia deve ser exibida:");
      scanf("%d",&j);
      x=y=1;
      printf("%d\n",x);
     for(i=0;i<=(j-1);i++)
      {
       y=x-y;
       x=y+x;
       printf("%d\n",x);
      }
 getch();    
 return 0;    
}
