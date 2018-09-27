#include <stdio.h>

int main ()
{
	int d,m;
	d=1;
	
	printf("Digite o mes do ano de 2016 para ver todos seus dias:");
	scanf("%d/n",&m);
	
	while(m < 1 || m > 12)
	    {
			printf("Digite o mes:/n");
			scanf("%d",&m);
		}
	for(m==2;d=<29;d++)
		{
			printf("%d/%d/2016\n",d,m);
		}
	for(m==4,6,9,11;d<=30;d++)
		{
			printf("%d/%d/2016\n",d,m);
		}
	for(m==1,3,5,7,8,10,12;d<=31;d++)
		{
			printf("%d/%d/2016\n",d,m);
		}
		
		
	getch();	
	return 0;
}
