#include <stdio.h>


int main()
{
	float av1,av2,av3, media;
	    
    printf("\nInsira a nota da AV1:");
	    scanf("%f",&av1);
	printf("\nInsira a nota da AV2:");
	    scanf("%f",&av2);
	printf("\nInsira a nota da AV3:");
	    scanf("%f", &av3);
	
	media=(av1+av2+av3)/3;
	
	if (media >= 6)
	 { 
	   printf("\nEsse aluno foi aprovado com a media %.1f",media);
	 }
	else 
	 {
	   printf("\nEsse aluno foi reprovado com a media %.1",media);
	 }
getch();
return 0;
}
