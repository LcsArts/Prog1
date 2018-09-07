#include <stdio.h>

int main (void)
{
 //calcule com números decimais.
	
	int n1, n2, soma, sub, mult;
	float div,c,f;

	
     printf("\nEntre com n1:");
     scanf("%d",&n1);
     printf("\nEntre com o n2:");
     scanf("%d",&n2);
     printf("\nQual a temperatura atual?:");
     scanf("%2f",&c);
	 
     soma = n1 + n2;
	 sub = n1 - n2;
	 mult = n1*n2;
	 div =(float) n1/n2;
	 f = (float) 1.8* c+32;
     	 
	 
	 printf("\nO resultado de %d mais %d deu: %d", n1, n2, soma);
	 printf("\nO resultado de %d menos %d deu: %d" , n1, n2, sub);
	 printf("\nO resultado de %d multiplicado por %d deu: %d", n1, n2, mult);
	 printf("\nO resultado de %d dividido por %d deu: %.2f", n1, n2, div);
	 printf("\nO resultado de %.2f celsius em fahrenheit deu: %.2f", c, f );
   
     getch();
	 	 	
    return 0;
}

