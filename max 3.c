//�������� ���� �����

#include <stdlib.h>  //����������� �������
#include <stdio.h> //�����
#include <conio.h> //������������ �������� ��� ������ � ���������
int main (/*����� ��� ����������*/) //main ��� �������
{
system("chcp 1251"); 
int a ,b,c;
printf("������� ��� �����\n");	
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

