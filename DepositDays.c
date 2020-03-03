#include <stdio.h>
#include <stdlib.h>



int main() {
	int Contribution;
	int DepositTerm;
	float Result;

	printf("Input contribution  \n");
	scanf("%d",&Contribution);
	printf("Input DepositTerm \n");
	scanf("%d",&DepositTerm);

	printf("Input DepositTerm \n");
	if  (DepositTerm > 365)  {
	Result = 0.02*Contribution*DepositTerm+Contribution;
}
	else 
{	Result = 0.015*Contribution*DepositTerm+Contribution;
	
}
	printf("Contribution: %d DepositTerm: %d \n",Contribution,DepositTerm);
	printf("%.2f \n",Result);
	printf("Or %d rubles and %d peny", (int)Result, ((int)(Result*100))%100 );
	return 0;
}

