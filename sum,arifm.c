//Сумма,произведение и средннее арифметическое 3 чисел

#include <stdlib.h>  //стандартные функции
#include <stdio.h> //вывод
#include <conio.h> //нестанартные средства для работы с монитором
int main (/*место для аргументов*/) //main это функция
{system("chcp 1251"); 
int a ,b,c;
printf("Введите три числа\n");	
scanf("%d%d",&a,&b); 
printf ( "Сумма: %d + %d = %d \n", a, b, a+b ); 
printf ( "Произведение: %d * %d = %d \n", a, b, a*b ); 
c = (a+b)/2;
printf ( "Среднее арифметическое:(%d+%d)/2=%.2f \n",a,b, (a+b)/2.0 ); 

 
getch(); 
}
/*от
до */


