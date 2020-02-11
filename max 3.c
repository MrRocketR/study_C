//Максимум трех чисел

#include <stdlib.h>  //стандартные функции
#include <stdio.h> //вывод
#include <conio.h> //нестанартные средства для работы с монитором
int main (/*место для аргументов*/) //main это функция
{
system("chcp 1251"); 
int a ,b,c;
printf("Введите три числа\n");	
scanf("%d%d%d",&a,&b,&c); 
	if (a > b && a > c)
		
		printf("%d" "\n",a);
	else if (b > c && b > a) 

		printf("%d" "\n",b);
	else 
	printf("%d" "\n",c);

	system("pause");
	return 0;	
}

