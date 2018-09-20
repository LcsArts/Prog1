#include <stdio.h>

int main()
{
    float sl,sb,d;
    
   
    
    printf("Digite o salario: ");
    scanf("%f",&sb);

   if (sb<=1500)
    {
    d=(sb*0.05);
    sl=sb-d;
    }
    else if (sb<=3500)
    {
    d=(sb*0.10);
    sl=sb-d;
    }
    else
    {
    d=(sb*0.15);
    sl=sb-d;
    }

    printf("O salario com desconto: %.0f",sl);

    
getch();

return 0;
}
