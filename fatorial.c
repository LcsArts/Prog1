#include <stdio.h>

int main()
{
int fat, n;

printf("Insira um valor do fatorial para calcular: ");
scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
{
fat = fat * n;
}
printf("\nResultado do fatorial: %d", fat);

getch();
return 0;

}
